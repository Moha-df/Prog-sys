CC = gcc
CFLAGS = -W -Wall -g
OBJETS = $(patsubst %.c, %.o, $(wildcard *.c))

main : $(OBJETS)
	$(CC) $(CFLAGS) -o $@ $^ 
%.o : %.c
	$(CC) $(CFLAGS) -c $<
clean:
	rm -f main $(OBJETS)
	@echo "Clean done."
