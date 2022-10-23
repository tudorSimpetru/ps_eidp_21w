CC=gcc
CFLAGS=-Wall -Werror -Wextra -Wpedantic -std=c11

.PHONY: all clean

all: s06e01_a s06e01_b s06e01_c s06e03

s06e01_a: s06e01_a.c

s06e01_b: s06e01_b.c

s06e01_c: s06e01_c.c
	$(CC) -std=c11 s06e01_c.c -o $@

s06e03: s06e03.c

clean:
	rm s06e01_a s06e01_b s06e01_c s06e03
