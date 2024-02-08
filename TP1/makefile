CC = gcc
CFLAGS = -W -Wall
SRC_DIR = Src
INCLUDE_DIR = Include
OBJ_DIR = Obj


SRCS = $(wildcard $(SRC_DIR)/*.c)

OBJS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

LDFLAGS = -g 
EXECUTABLE = main

$(EXECUTABLE): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)


$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCLUDE_DIR)

doc:
	doxygen Doxyfile

clean:
	rm -f $(EXECUTABLE) $(OBJS)
	rm -rf doc
	@echo "Clean done."
