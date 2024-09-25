#pragma once

class bus;

class cpu6502{
public:
    cpu6502();
    ~cpu6502();

    void connBus(bus *n) {bus = n;}

private:
    bus *bus = nullptr;
    uint8_t read(uint16_t a);
    void write (uint16_t a, uint8_t d);
   
};