CC = gcc
CFLAGS = -W -Wall -g
OBJETS = fork1.o

all: fork1

fork1: % : %.o
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f fork1 $(OBJETS)
	@echo "Clean done."
