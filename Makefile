CC      := gcc
CFLAGS  := -Wall -Wextra -std=c11 -Iinclude -g
LDFLAGS := 

# default target
all: pointers memory_layout

pointers:
	$(CC) $(CFLAGS) -o bin_pointers \
		src/01_pointers/main.c \
		src/01_pointers/pointer_examples.c \
		$(LDFLAGS)

memory_layout:
	$(CC) $(CFLAGS) -o bin_memory_layout \
		src/02_memory_layout/main.c \
		src/02_memory_layout/memory_layout.c \
		$(LDFLAGS)

clean:
	rm -f bin_pointers bin_memory_layout

.PHONY: all clean memory_layout pointers