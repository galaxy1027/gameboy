#include <stdint.h>
#include <stdbool.h>
#include "cpu.h"

void setRegister(gbRegisters_t *reg, registerName name, uint16_t val)
{
    uint16_t *registerPointer;
    switch (name)
    {
    case AF:
        registerPointer = &reg->AF;
        break;
    case BC:
        registerPointer = &reg->BC;
        break;
    case DE:
        registerPointer = &reg->DE;
        break;
    case HL:
        registerPointer = &reg->HL;
        break;
    }
    *registerPointer = val;
}

void setRegisterLo(gbRegisters_t *reg, registerName name, uint8_t val)
{
    uint16_t *registerPointer;
    switch (name)
    {
    case AF:
        registerPointer = &reg->AF;
        break;
    case BC:
        registerPointer = &reg->BC;
        break;
    case DE:
        registerPointer = &reg->DE;
        break;
    case HL:
        registerPointer = &reg->HL;
        break;
    }
    *registerPointer = (*registerPointer & 0xFF00) | val;
}

void setRegisterHi(gbRegisters_t *reg, registerName name, uint8_t val)
{
    uint16_t *registerPointer;
    switch (name)
    {
    case AF:
        registerPointer = &reg->AF;
        break;
    case BC:
        registerPointer = &reg->BC;
        break;
    case DE:
        registerPointer = &reg->DE;
        break;
    case HL:
        registerPointer = &reg->HL;
        break;
    }
    *registerPointer = (*registerPointer & 0x00FF) | (val << 8);
}

uint16_t getRegister(gbRegisters_t *reg, registerName name)
{
    uint16_t *registerPointer;
    switch (name)
    {
    case AF:
        registerPointer = &reg->AF;
        break;
    case BC:
        registerPointer = &reg->BC;
        break;
    case DE:
        registerPointer = &reg->DE;
        break;
    case HL:
        registerPointer = &reg->HL;
        break;
    }
    return *registerPointer;
}

uint8_t getRegisterLo(gbRegisters_t *reg, registerName name)
{
    uint16_t *registerPointer;
    switch (name)
    {
    case AF:
        registerPointer = &reg->AF;
        break;
    case BC:
        registerPointer = &reg->BC;
        break;
    case DE:
        registerPointer = &reg->DE;
        break;
    case HL:
        registerPointer = &reg->HL;
        break;
    }
    return *registerPointer & 0xFF;
}

uint8_t getRegisterHi(gbRegisters_t *reg, registerName name)
{
    uint16_t *registerPointer;
    switch (name)
    {
    case AF:
        registerPointer = &reg->AF;
        break;
    case BC:
        registerPointer = &reg->BC;
        break;
    case DE:
        registerPointer = &reg->DE;
        break;
    case HL:
        registerPointer = &reg->HL;
        break;
    }
    return (*registerPointer >> 8) & 0xFF;
}
