CC=gcc
AR=ar
FLAGS= -Wall -g
all: connections
connections: main.o my_matrix.a my_mat.h
	$(CC) $(FLAGS) -o connections main.o my_matrix.a

matrix: my_matrix.a
my_matrix.a: my_mat.o
	$(AR) -rcs  my_matrix.a my_mat.o

my_mat.o: my_mat.c
	$(CC) $(FLAGS) -c my_mat.c

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

.PHONY: clean all
