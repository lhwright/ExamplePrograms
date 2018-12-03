
.PHONY: all

all: main

main: heap.o main.cpp makefile
	g++ heap.o main.cpp -Werror=all -std=c++11 -o main

heap.o: heap.cpp heap.h makefile
	g++ heap.cpp -Werror=all -std=c++11 -c
