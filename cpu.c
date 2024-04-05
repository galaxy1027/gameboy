#include <stdio.h>
#include "cpu.h"

int main() {
    CPU_REGISTERS reg;

    reg.A = 0x12;
    reg.F = 0x34;
    reg.B = 0x56;
    reg.C = 0x78;
    reg.D = 0x90;
    reg.E = 0xAB;
    reg.H = 0xCD;
    reg.L = 0xEF;

    printf("--Registers--\nAF:\t%X\nBC:\t%X\nDE:\t%X\nHL:\t%X\n", reg.AF, reg.BC, reg.DE, reg.HL);

    return 0;
}

