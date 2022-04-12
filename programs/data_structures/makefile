CC = gcc
CFLAGS = -I.
DEPS = queue.h stack.h binary_search_tree.h
OBJ = main.o queue.o stack.o binary_search_tree.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

data_structs: $(OBJ)
	$(CC) -o app $(OBJ)

.PHONY: clean
clean: 
	rm *.o
