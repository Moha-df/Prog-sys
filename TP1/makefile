CC = gcc
CFLAGS = -W -Wall -g
OBJETS = cp_sys.o cp_std.o cp_rev.o

all: cp_sys cp_std cp_rev

cp_sys cp_std cp_rev: % : %.o
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f cp_sys cp_std cp_rev $(OBJETS)
	@echo "Clean done."
