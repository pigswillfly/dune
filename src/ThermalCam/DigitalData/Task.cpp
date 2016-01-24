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

const static uint32_t WIDTH = 640;
const static uint32_t HEIGHT = 512;
const static uint32_t BUFFER_SIZE = WIDTH*HEIGHT;
const static unsigned QUALITY = 50;

namespace ThermalCam
{
  namespace DigitalData
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Task
    {
      SerialPort* m_pcbComs;
      ByteBuffer* m_readBuf;
      Media::JPEGCompressor m_jpeg;
      IMC::CompressedImage m_frame;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_pcbComs(NULL),
        m_readBuf(NULL)
      {
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
    	m_pcbComs = new SerialPort("/dev/ttyUSB0", 9600); // need testing for baud
    	// may need to have video streaming USB device driver installed
    	// custom PCB USB device class = 0xFF, interface class 0x10

    	m_readBuf = new ByteBuffer(BUFFER_SIZE);
    	m_jpeg.setInputDimensions(WIDTH, HEIGHT);
    	m_jpeg.setInputColorSpace(m_jpeg.CS_GRAYSCALE); // don't know?? use gs for now
    	m_jpeg.setInputColorSpace(m_jpeg.CS_GRAYSCALE);

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
    	Memory::clear(m_pcbComs);
    	Memory::clear(m_readBuf);
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          // read from USB
          // is this non-blocking? it needs to be...should happen 9 times per second
          m_pcbComs->read(m_readBuf->getBuffer(),BUFFER_SIZE);

          // compress received frame
          m_jpeg.compress(m_readBuf->getBuffer(), QUALITY);

          // put into frame IMC message
          const char* img = (const char*)(m_jpeg.imageData());
          m_frame.data.assign(img, img + m_jpeg.imageSize());
          // frame ID?
          // send
          dispatch(m_frame);
        }
      }
    };
  }
}

DUNE_TASK
