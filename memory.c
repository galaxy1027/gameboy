#include <stdint.h>
#include "memory.h"


uint8_t readWRAM(Memory* memory, uint16_t addr) {
    return memory->wRam[addr];
}

uint8_t readVRAM(Memory* memory, uint16_t addr) {
    return memory->vRam[addr];
}

void writeWRAM(Memory* memory, uint16_t addr, uint8_t val) {
    memory->wRam[addr] = val;
}

void writeVRAM(Memory* memory, uint16_t addr, uint8_t val) {
    memory->vRam[addr] = val;
}

