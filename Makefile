CC		:= gcc
CFLAGS	:= -Wall -Wextra -std=c11 -Iinclude -g
LDFLAGS := 

all: pointers

pointers:
	$(CC) $(CFLAGS) -o bin_pointers src/01_pointers/main.c src/01_pointers/pointer_examples.c $(LDFLAGS)

clean:
	rm -f bin_pointers

.PHONY: all clean
