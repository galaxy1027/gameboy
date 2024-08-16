CC=gcc
CFLAGS=-g -Wall
FILES=cpu.c gb.c instruction.c main.c memory.cpu
DERIV=$(FILES:.c=.o)
DEPEND=$(DERIV)

all: GameboyEmu

GameboyEmu: $(DEPEND)
	$(CC) -o GameboyEmu $(CFLAGS) $(DERIV)

clean:
	rm -f $(DERIV) GameboyEmu