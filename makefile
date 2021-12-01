CC=gcc
AR=ar
FLAGS= -Wall -g


all: connections

connections: main.o my_matlib.a my_mat.h
	$(CC) $(FLAGS) -o connections main.o my_matlib.a

matrixlib: my_matlib.a
my_matlib.a: my_mat.o
	$(AR) -rcs my_matlib.a my_mat.o

my_mat.o: my_mat.c
	$(CC) $(FLAGS) -c my_mat.c

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

.PHONY: clean all