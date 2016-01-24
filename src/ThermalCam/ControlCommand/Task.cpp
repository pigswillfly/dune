//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: LizRoy                                                           *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Hardware/SerialPort.hpp>

const static int BUFFER_SIZE = 20;
// maybe need to increase buffer size for read buffer?

namespace ThermalCam
{
  namespace ControlCommand
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Task
    {
      SerialPort* m_camComs;
      ByteBuffer* m_writeBuf;
      ByteBuffer* m_readBuf;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
      m_camComs(NULL),
      m_writeBuf(NULL),
      m_readBuf(NULL)
      {
    	 bind<IMC::ThermalCamControl>(this);
      }

      ~Task(void)
      {
    	  onResourceRelease();
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
    	m_camComs = new SerialPort("/dev/ttyUSB0", 921600);
    	// handle error?

    	m_writeBuf = new ByteBuffer(BUFFER_SIZE);
    	m_readBuf = new ByteBuffer(BUFFER_SIZE);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
    	Memory::clear(m_camComs);
    	Memory::clear(m_readBuf);
    	Memory::clear(m_writeBuf);
      }

      void
      consume(const IMC::ThermalCamControl* msg)
      {
    	  // translate IMC message to camera protocol (in m_writeBuf)
    	  makeCamProtocol(msg);

          // write command to serial port
          uint8_t bytesWritten = m_camComs->write(m_writeBuf->getBuffer(), m_writeBuf->getSize());
          // check bytes written

          // wait for reply on serial port
          waitForReply();
      }

      // put reply into IMC message and send to ground station
      void
      waitForReply()
      {
    	IMC::ThermalCamControl msg;
    	m_readBuf->resetBuffer();

    	// read header from serial port
    	m_camComs->read(m_readBuf->getBuffer(),8);

    	// put header values in IMC msg
    	msg.function = *(m_readBuf->getBuffer());
    	msg.status = *(m_readBuf->getBuffer() + 1);
    	msg.function = *(m_readBuf->getBuffer() + 3);
    	msg.bytecount = (uint16_t)((*(m_readBuf->getBuffer()+4) << 8)|(*(m_readBuf->getBuffer()+5)));

    	// check header crc
    	// get args + body crc according to byte count
    	m_camComs->read(m_readBuf->getBuffer()+8, msg.bytecount+2);
    	// put args into IMC msg
    	for(int i = 0; i < msg.bytecount; i++){
    	  msg.args.push_back(*(m_readBuf->getBuffer()+8+i));
    	}
    	// check msg crc
    	// set sender of IMC message
    	msg.setSourceEntity(getEntityId());
    	// send
    	dispatch(msg);

    	// return and wait for more commands
      }

      // translate IMC message to camera protocol
      void
      makeCamProtocol(const IMC::ThermalCamControl* msg)
      {
    	uint8_t ret = 0;
    	m_writeBuf->resetBuffer();

    	// get header
    	const uint8_t header[] = {	msg->processcode,
    								msg->status,
    								0x00,
    								msg->function,
    								((uint8_t)(msg->bytecount | 0xFF00) >> 8),
    								((uint8_t)(msg->bytecount | 0x00FF))	};

    	// put into write buffer
    	m_writeBuf->append(header, 6);

    	// calculate header crc and put into write buffer
    	uint16_t crc = CRCCCITT::compute(m_writeBuf->getBuffer(),6);
    	m_writeBuf->append(&((const uint8_t)((crc | 0xFF00) >> 8)), 1);
    	m_writeBuf->append(&((const uint8_t)(crc | 0x00FF)), 1);

    	// handle args
		uint8_t nArgs = msg->getVariableSerializationSize();
		if(nArgs > 0){
		  m_writeBuf->append((uint8_t*)&msg->args, nArgs);
		}

		// calculate body header and put into write buffer
    	crc = CRCCCITT::compute(m_writeBuf->getBuffer(),m_writeBuf->getSize());
    	m_writeBuf->append(&((const uint8_t)((crc | 0xFF00) >> 8)), 1);
    	m_writeBuf->append(&((const uint8_t)(crc | 0x00FF)), 1);

    	// return
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          // wait for ThermalCamControl messages
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
