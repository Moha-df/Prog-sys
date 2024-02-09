CC = gcc
CFLAGS = -W -Wall -g
OBJETS = $(patsubst %.c, %.o, $(wildcard *.c))

all: cp_sys cp_std

cp_sys : cp_sys.o
	$(CC) $(CFLAGS) -o $@ $^

cp_sys.o : cp_sys.c
	$(CC) $(CFLAGS) -c $<


cp_std : cp_std.o
	$(CC) $(CFLAGS) -o $@ $^

cp_std.o : cp_std.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f cp_sys cp_std $(OBJETS)
	@echo "Clean done."
