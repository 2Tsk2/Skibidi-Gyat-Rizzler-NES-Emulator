#include "bus.h"

bus::bus(){
    for (auto &i : ram) i = 0x00;
    cpu.ConnectBus(this);
   
}

bus::~bus(){
 
}

uint8_t bus::read(uint16 addr, bool bReadOnly){
    if (addr >=0x0000 && addr <= 0xFFFF)
    return ram[addr];
    return 0x00;
}

void bus::write(uint16 addr, uint8_t data){
 if (addr >= 0x0000 && addr <= 0xFFFF)
 ram[addr] = data;
}
