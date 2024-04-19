#ifndef MEMORY_H
#define MEMORY_H

#include <stdint.h>

typedef struct Memory {
    uint8_t wRam[8*1024];
    uint8_t vRam[8*1024];
} Memory;

uint8_t readWRAM(Memory* memory, uint16_t addr);
uint8_t readVRAM(Memory* memory, uint16_t addr);

void writeWRAM(Memory* memory, uint16_t addr, uint8_t val);
void writeVRAM(Memory* memory, uint16_t addr, uint8_t val);

#endif
