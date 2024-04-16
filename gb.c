#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "gb.h"

int loadRom(GB* gb, const char* path) {
    FILE* rom = fopen(path, "rb");
    if (!rom) {
        printf("Could not open ROM");
        return errno;
    }
    fseek(rom, 0, SEEK_END);
    uint32_t size = ftell(rom);
    rewind(rom);

    gb->rom_size = size;
    gb->rom = malloc(gb->rom_size);
    memset(gb->rom, 0xFF, gb->rom_size);
    fread(gb->rom, 1, gb->rom_size, rom);
    fclose(rom);

    return 0;

}
