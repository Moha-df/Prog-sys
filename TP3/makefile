CC = gcc
CFLAGS = -W -Wall -g
OBJETS = fork1.o fork2.o run.o

all: fork1 fork2 run

fork1 fork2 run: % : %.o
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f fork1 fork2 run $(OBJETS)
	@echo "Clean done."
