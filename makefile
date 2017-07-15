CC = gcc
CFLAGS = -ansi -pedantic -Wall 

all: project2

project2: matrix.o project2.o matrix.h
	$(CC) $(CFLAGS) matrix.c project2.c -o project2test

matrix.o: matrix.c
	$(CC) $(CFLAGS) -c matrix.c

project2.o: project2.c
	$(CC) $(CFLAGS) -c project2.c

clean:
	rm *.o
