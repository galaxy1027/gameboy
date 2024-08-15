#ifndef CPU_H
#define CPU_H
#include <stdint.h>

/*
 * Registers
 *
 * Contains eight 8-bit registers which can also
 * be combined and accessed as four 16-bit registers.
 *
 * Annonymous structs and unions are used to save each type of register in
 * the same memory. This makes accessing/modifying both formats convinient.
 *
 * Note: The "F" register also handles flags. The flags are (zero indexing):
 *
 * Bit 7: Zero
 * Bit 6: Subtraction
 * Bit 5: Half-Carry
 * Bit 4: Carry
 */

typedef enum
{
    AF,
    BC,
    DE,
    HL
} registerName;

typedef struct gbRegisters_t
{
    union
    {
        struct
        {
            uint8_t F;
            uint8_t A;
        };
        uint16_t AF;
    };
    union
    {
        struct
        {
            uint8_t C;
            uint8_t B;
        };
        uint16_t BC;
    };
    union
    {
        struct
        {
            uint8_t E;
            uint8_t D;
        };
        uint16_t DE;
    };
    union
    {
        struct
        {
            uint8_t L;
            uint8_t H;
        };
        uint16_t HL;
    };

    uint16_t PC;
    uint16_t SP;

} gbRegisters_t;

void setRegister(gbRegisters_t *reg, registerName name, uint16_t val);
void setRegisterLo(gbRegisters_t *reg, registerName name, uint8_t val);
void setRegisterHi(gbRegisters_t *reg, registerName name, uint8_t val);
uint16_t getRegister(gbRegisters_t *reg, registerName name);
uint8_t getRegisterLo(gbRegisters_t *reg, registerName name);
uint8_t getRegisterHi(gbRegisters_t *reg, registerName name);

#endif
