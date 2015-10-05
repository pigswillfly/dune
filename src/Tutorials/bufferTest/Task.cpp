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

namespace Tutorials
{
  namespace bufferTest
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Task
    {
      ByteBuffer* m_byteBuf;
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_byteBuf(NULL)
      {
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
    	m_byteBuf = new ByteBuffer(20);
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
    	Memory::clear(m_byteBuf);
      }

      //! Main loop.
      void
      onMain(void)
      {
    	while (!(stopping()))
		{
			const uint8_t command[] = {0x6E,0,0,0,0,0,0x8D,0x68,0x93,0xC3};
			m_byteBuf->write(command,10);
			uint8_t* bufptr = m_byteBuf->getBuffer();
			inf("%X%X%X%X%X%X%X%X%X%X",
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
			Delay::wait(1.0);
		}

      }
    };
  }
}

DUNE_TASK
