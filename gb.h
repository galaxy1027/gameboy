#ifndef GB_H
#define GB_H

#include "cpu.h"
#include "memory.h"

typedef struct GB {
    uint8_t* rom;
    uint32_t rom_size;
} GB;

int loadRom(GB* gb, const char* path);

#endif
