CC = gcc
CFLAGS = -Wall -Iinclude
SRC = src/main.c src/wordle.c
OUT = bin/wordle_solver

all:
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)
 

