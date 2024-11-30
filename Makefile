CC = gcc
CFLAGS = -Wall
SOURCES = src/binary_tree.c
EXEC = binary_tree

all:
    $(CC) $(CFLAGS) -o $(EXEC) $(SOURCES)

run:
    ./binary_tree

clean:
    rm -f $(EXEC)
