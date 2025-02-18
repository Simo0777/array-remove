all: main

clean:main main.o array.o
		rm main main.o array.o
main: main.o array.o
		gcc -o main main.o array.o

main.o: main.c array.h
		gcc -c -o main.clean

array.o: array.c array.h
		 gcc -g -c -o array.o array.c