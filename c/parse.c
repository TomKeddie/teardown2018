#include "parse.h"

void parse(const uint64_t packet[], unsigned* result)
{
    const uint64_t mask[]  = {
        // Destination MAC Address, First two bytes of Source MAC Address
        0x000000000000000,
        // Last four bytes of Source MAC Address, Two bytes of Ethertype, First two bytes of payload
        0x00000000FFFFF000,
    };
    const uint64_t match[] = {
        // Destination MAC Address, First two bytes of Source MAC Address
        0x000000000000000,
        // Last four bytes of Source MAC Address, Two bytes of Ethertype, First two bytes of payload
        0x0000000008004000,
    };
    
    for(uint8_t iy=0; iy < sizeof(mask)/sizeof(mask[0]); iy++)
    {
        if ((packet[iy] & mask[iy]) != match[iy])
        {
            *result = 0;
            return;
        }
    }
    *result = 1;
    return;
}

