
#ifndef DUNE_ALGORITHMS_CRC_CCITT_HPP_INCLUDED_
#define DUNE_ALGORITHMS_CRC_CCITT_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Algorithms
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM CRCCCITT;

    extern const uint16_t c_crc_ccitt_table[256];

    //! CRC-CCITT Algorithm.
    //! The polynomial used is x^16 + x^12 + x^5 + 1 (0x1021)
    class CRCCCITT
    {
    public:
      //! Compute the CRC-CCITT of a given data buffer.
      //! @param buffer data buffer.
      //! @param len data buffer length.
      //! @param crc CRC-CCITT value to update.
      //! @return computed CRC-CCITT.
      static inline uint16_t
      compute(const uint8_t* buffer, uint16_t len, uint16_t crc = 0)
      {
        while (len--)
          crc = c_crc_ccitt_table[*buffer++ ^ (crc >> 8)] ^ (crc << 8);

        return crc;
      }

      //! Compute the CRC-CCITT of a given byte.
      //! @param byte byte.
      //! @param crc CRC-CCITT value to update.
      //! @return computed CRC-CCITT.
      static inline uint16_t
      compute(uint8_t byte, uint16_t crc = 0)
      {
        return (crc >> 8) ^ c_crc_ccitt_table[(crc ^ byte) & 0xff];
      }
    };
  }
}

#endif
