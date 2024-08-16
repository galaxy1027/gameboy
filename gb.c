#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "gb.h"

int loadRom(GB *gb, const char *path)
{
    FILE *file = fopen(path, "rb");
    if (!file)
    {
        printf("Could not open ROM\n");
        return errno;
    }
    fseek(file, 0, SEEK_END);
    rewind(file);

    int romSpace = sizeof(gb->rom) / sizeof(uint8_t);

    memset(gb->rom, 0xFF, romSpace); // initialize gameboy rom space to 1
    fread(gb->rom, 1, romSpace, file);
    fclose(file);

    return 0;
}
