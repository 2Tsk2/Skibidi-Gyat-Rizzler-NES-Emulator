#pragma once 
#include <cstdint>

class bus{
public:
  bus(); 
  ~bus();

};

public:{ //Devices
  cpu6502 cpu; 
  std::array<uint8_t, 64 * 1024> ram; // funny ram moments, about 64kb of ram to be exact

}

public:{ // Read and write stuff
    void write(uint16_t addr, uint8_t data);
    uint8_t read(uint16_t addr, bool bReadOnly = false);

}


