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

namespace ThermalCam
{
  namespace ControlCommand
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Task
    {
/*      SerialPort* m_camComs;
      uint8_t writeBuffer[BUFFER_SIZE];
      uint8_t readBuffer[BUFFER_SIZE];
      uint8_t writeSize = 0;
*/
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
//        m_camComs(NULL)
      {
    	 // bind<IMC::ThermalCamCommand>(this);
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
    	// how to know name of serial port attached to camera?
 //   	  m_camComs = new SerialPort("/dev/ttyUSB0", 921600, NULL, NULL, NULL);
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
  //  	  Memory::clear(m_camComs);
      }
/*

      void
      consume(const IMC::ThermalCamCommand* msg)
      {
    	  //makeCamProtocol(msg->command, msg->getVariableSerializationSize(), msg->args, writeBuffer);
    	  // 0x6E00000000008D6893C3

          // write command to serial port
          // uint8_t bytesWritten = m_camComs->doWrite(writeBuffer, WRITE_SIZE);

          // wait for reply on serial port

          // put reply into IMC message and send back

      } */

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
			waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
