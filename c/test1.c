#include "parse.h"

#include "packets.c" // HACK

static const unsigned char* packets[] = {pkt1, pkt2, pkt3, pkt4, pkt5};

int main(int argc, char** argv)
{
    uint64_t packetData[8];

    for (uint8_t ix=0; ix < sizeof(packets)/sizeof(packets[0]); ix++)
    {
        for (uint8_t iy=0; iy < sizeof(packetData)/sizeof(packetData[0]); iy++)
            packetData[iy] = packets[ix][iy*8] << 56 | 
    
    return 0;
}
