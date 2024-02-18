CC = gcc
CFLAGS = -W -Wall -g
OBJETS = my_stat.o ls1.o ls2.o

all: my_stat ls1 ls2

my_stat ls1 ls2: % : %.o
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f my_stat ls1 ls2 $(OBJETS)
	@echo "Clean done."
