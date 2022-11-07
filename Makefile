CC=gcc
CFLAGS=-Wall -Werror -Wextra -pedantic -std=gnu89

.PHONY: all
	cl

all: 
	$(CC) $(CFLAGS) *.c -o bubble

cl:
	rm -f bubble *.out

