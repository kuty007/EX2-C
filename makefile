CC=gcc
AR=ar
FLAGS= -Wall -g
all: connections
OBJ_MAIN = main.o
OBJ_MAT = my_mat.o
all: connections
connections: $(OBJ_MAIN) my_matlib.a my_mat.h
	$(CC) $(FLAGS) -o connections $(OBJ_MAIN) my_matliab.a

matrix: my_matliab.a
my_matliab.a: $(OBJ_MAT)
	$(AR) -rcs my_matlab.a $(OBJ_MAT)

my_mat.o: my_mat.c
	$(CC) $(FLAGS) -c my_mat.c

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

.PHONY: clean all
