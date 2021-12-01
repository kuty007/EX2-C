CC=gcc
AR=ar
FLAGS= -Wall -g
all: connections
OBJ_MAIN = main.o
OBJ_MAT = my_mat.o
connections: $(OBJ_MAIN)my_matlab.a my_mat.h
	$(CC) $(FLAGS) -o connections $(OBJ_MAIN) my_matlab.a

matrix: my_matlab.a
my_matlab.a: $(OBJ_MAT)
	$(AR) -rcs my_matlab.a $(OBJ_MAT)

my_mat.o: my_mat.c
	$(CC) $(FLAGS) -c my_mat.c

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

.PHONY: clean all