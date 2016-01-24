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

#include <DUNE/DUNE.hpp>
#include <DUNE/Algorithms/CRCCCITT.hpp>

//static const uint8_t zero[5] = {0x0, 0x0, 0x0, 0x0, 0x0};
//static const uint8_t validateComms[10] = {0x6E, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDF, 0xBB, 0x00, 0x00};

namespace Tutorials
{
	namespace TempCons
	{
		using DUNE_NAMESPACES;

		struct Task: public DUNE::Tasks::Task
		{
/*			// Parameters
			std::string m_trg_prod;

			SerialPort* m_camComs;
			ByteBuffer* m_writeBuf;
			ByteBuffer* m_readBuf;*/

			Task(const std::string& name, Tasks::Context& ctx):
		        DUNE::Tasks::Task(name, ctx)
/*		        m_camComs(NULL),
		        m_writeBuf(NULL),
		        m_readBuf(NULL)*/
			{
/*				param("Target Producer", m_trg_prod)
				.description("Target producer to read from")
				.defaultValue("Producer");
		
				bind<IMC::ThermalCamControl>(this);*/
			}

			~Task(void)
			{
			  onResourceRelease();
			}

			void
			onResourceAcquisition(void)
			{
/*		    	inf("Connecting to serial port...");
		    	do
		    	{
		    	  Delay::wait(1.0);
		    	  m_camComs = new SerialPort("/dev/ttyUSB0", 921600);
		    	  Delay::wait(1.0);
		    	}while(m_camComs->getNative() == -1);

		    	inf("Connected!");

		    	m_writeBuf = new ByteBuffer(16);
		    	m_readBuf = new ByteBuffer(16);

		    	m_writeBuf->write(validateComms, 10);

		    	uint16_t crc;

		    	do
		    	{
				  do
				  {
					m_camComs->flushOutput();
					m_camComs->write(m_writeBuf->getBuffer(), 10);
					m_camComs->read(m_readBuf->getBuffer(), 10);

				  }while((!stopping())&&(*m_readBuf->getBuffer() != 0x6E));

				  crc = get16(m_readBuf->getBuffer() + 6, m_readBuf->getBuffer() + 7);
				  //inf("Status = %X, crc1 = %X", *(m_readBuf->getBuffer()+1), crc);

				  Delay::wait(2.0);

		    	}while((crc != 0xDFBB)&&(!stopping()));

		    	inf("Comms validated");*/
			}

			//! Release resources.
			void
			onResourceRelease(void)
			{
/*			  Memory::clear(m_camComs);
			  Memory::clear(m_readBuf);
			  Memory::clear(m_writeBuf);*/
			}

/*			// append 16 bit value val to byte buffer buf  BIG ENDIAN
			void
			append16(uint16_t val, ByteBuffer *buf)
			{
			  uint8_t msb = (uint8_t)((val & 0xFF00) >> 8);
			  uint8_t lsb = (uint8_t)(val & 0x00FF);

			  buf->append(&msb, 1);
			  buf->append(&lsb, 1);

			}

			uint16_t
			get16(uint8_t* msb, uint8_t* lsb)
			{
			  return ((uint16_t)*msb << 8) | (uint16_t)*lsb;
			}*/

/*			void
			consume(const IMC::ThermalCamControl* msg)
			{
				//if (m_trg_prod = msg.get(SourceEntity))
				if (m_trg_prod == resolveEntity(msg->getSourceEntity()))
				{
				  m_writeBuf->resetBuffer();
				  m_writeBuf->append(&msg->processcode, 1);
				  m_writeBuf->append(&msg->status, 1);
				  m_writeBuf->append(zero, 1); // 3rd byte "Reserved"
				  m_writeBuf->append(&msg->function, 1);
				  append16(msg->bytecount, m_writeBuf);

				  uint16_t headerCheck = CRCCCITT::compute(m_writeBuf->getBuffer(), 6);
				  //inf("Header check is: %X ", headerCheck);
				  append16(headerCheck, m_writeBuf);

				  uint8_t nArgs = msg->getVariableSerializationSize();
				  if(nArgs > 0)
				  {
					m_writeBuf->append((uint8_t*)&msg->args, nArgs);
					uint16_t bodyCheck = CRCCCITT::compute(m_writeBuf->getBuffer(), m_writeBuf->getSize());
					append16(bodyCheck, m_writeBuf);
				  }
				  else
				  {
					m_writeBuf->append(zero, 2);
				  }

				  sendCommandAndReadReply();

				  uint8_t* writeBuf = m_writeBuf->getBuffer();
				  inf("Write buffer: %X%X%X%X%X%X%X%X%X%X",
					  *writeBuf,
					  *(writeBuf+1),
					  *(writeBuf+2),
					  *(writeBuf+3),
					  *(writeBuf+4),
					  *(writeBuf+5),
					  *(writeBuf+6),
					  *(writeBuf+7),
					  *(writeBuf+8),
					  *(writeBuf+9));

				  m_readBuf->resetBuffer();
				  uint8_t* bufptr = m_readBuf->getBuffer();

				  m_camComs->flushOutput();
				  inf("Writing to camera...\n");
				  m_camComs->write(m_writeBuf->getBuffer(), m_writeBuf->getSize());

				  inf("Reading reply...");
				  m_camComs->read(bufptr, 10);

				  inf("Camera reply is %X%X%X%X%X%X%X%X%X%X",
					  *bufptr,
					  *(bufptr+1),
					  *(bufptr+2),
					  *(bufptr+3),
					  *(bufptr+4),
					  *(bufptr+5),
					  *(bufptr+6),
					  *(bufptr+7),
					  *(bufptr+8),
					  *(bufptr+9));


				}
			}*/

/*			void
			sendCommandAndReadReply()
			{
			  IMC::ThermalCamControl reply;
			  m_readBuf->resetBuffer();
			  uint16_t crc1, crc2, expectedCRC1, expectedCRC2, ret;
			  uint8_t* bufptr = m_readBuf->getBuffer();
			  int attempts = -1;

			  do // crc check
			  {
				//inf("CRC check");
				do // process code check
				{
				  //inf("process code check");
				  do // whole write buffer sent check
				  {
					//inf("write check");
					attempts++;
					//inf("Attempt number %i", attempts);
					if(attempts > 0)
					{
					  Delay::wait(2.0);
					  m_camComs->read(m_readBuf->getBuffer(), 2);
					  m_camComs->flushInput();
					}

					//inf("Writing to camera...\n");
					m_camComs->flushOutput();
					ret = m_camComs->write(m_writeBuf->getBuffer(), m_writeBuf->getSize());

				  }while( (ret != m_writeBuf->getSize()) && (!stopping()) ); // whole write buffer sent check

				  //inf("Reading reply...");
				  m_readBuf->resetBuffer();
				  bufptr = m_readBuf->getBuffer();
				  m_camComs->read(bufptr, 1);
				  //inf("First byte read: %X", *bufptr);

				}while( (*bufptr != 0x6E) && (!stopping()) ); // process code check

				m_camComs->read(bufptr+1, 7);
				reply.processcode = *bufptr;
				bufptr++;
				reply.status = *bufptr;
				bufptr+=2;
				reply.function = *bufptr;
				bufptr++;
				reply.bytecount = get16(bufptr, bufptr+1);
				bufptr+=2;
				crc1 = get16(bufptr, bufptr+1);
				bufptr+=2;

				m_camComs->read(bufptr, reply.bytecount+2);
				for(int i = 0; i < reply.bytecount; i++)
				{
				  reply.args.push_back(*bufptr);
				  bufptr++;
				}
				crc2 = get16(bufptr, bufptr+1);

				//inf("CRC1 = %X, CRC2 = %X", crc1, crc2);
				expectedCRC1 = CRCCCITT::compute(m_readBuf->getBuffer(), 6);
				expectedCRC2 = CRCCCITT::compute(m_readBuf->getBuffer(), 8 + reply.bytecount);

			  }while( ( (crc2 != expectedCRC2) || (crc1 != expectedCRC1) ) && (!stopping()) ); // crc check

			  //dispatch(reply);
			  inf("Camera reply (without args) is %X%X%X%X%X%X%X",
				  reply.processcode,
				  reply.status,
				  *(m_readBuf->getBuffer()+2),
				  reply.function,
				  reply.bytecount,
				  crc1,
				  crc2);
			}*/

			void
			onMain(void)
			{
				while(!stopping())
				{
					waitForMessages(1.0);
				}
			}
		};
	}
}
DUNE_TASK
