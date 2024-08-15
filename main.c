#include <stdio.h>
#include <stdlib.h>
#include "cpu.h"
#include "gb.h"
#include "memory.h"

int main(int argc, char **argv)
{
    GB *gameboy = malloc(sizeof(GB));

    setRegister(&gameboy->registers, AF, 0x1234);
    setRegister(&gameboy->registers, BC, 0x5678);
    setRegister(&gameboy->registers, DE, 0x9ABC);
    setRegisterHi(&gameboy->registers, HL, 0xDE);
    setRegisterLo(&gameboy->registers, HL, 0xF0);
    printf("Expected values:\n AF: 0x1234\n BC: 0x5678\n DE: 0x9ABC\n HL: 0xDEF0\n");
    printf("-- Registers --\n");
    printf("AF: %X\n", getRegister(&gameboy->registers, AF));
    printf("BC: %X\n", getRegister(&gameboy->registers, BC));
    printf("D: %X\n", getRegisterHi(&gameboy->registers, DE));
    printf("E: %X\n", getRegisterLo(&gameboy->registers, DE));
    printf("DE: %X\n", getRegister(&gameboy->registers, DE));
    printf("HL: %X\n", getRegister(&gameboy->registers, HL));
    free(gameboy);
}