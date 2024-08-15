#ifndef GB_H
#define GB_H

#include "cpu.h"
#include "memory.h"

typedef struct GB
{
    uint8_t rom[0x7FFF];
    gbRegisters_t registers;
} GB;

int loadRom(GB *gb, const char *path);

#endif
