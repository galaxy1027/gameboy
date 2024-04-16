#ifndef MEMORY_H
#define MEMORY_H

#include <stdint.h>

const uint16_t WRAM_SIZE = 8 * 1024;
const uint16_t VRAM_SIZE = 8 * 1024;

typedef struct Memory {
    uint8_t wRam[WRAM_SIZE];
    uint8_t vRam[VRAM_SIZE];
} Memory;

uint8_t readWRAM(Memory* memory, uint16_t addr);
uint8_t readVRAM(Memory* memory, uint16_t addr);

void writeWRAM(Memory* memory, uint16_t addr, uint8_t val);
void writeVRAM(Memory* memory, uint16_t addr, uint8_t val);

#endif
