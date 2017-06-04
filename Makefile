all:
	mkdir -p build
	gcc -Wall -Werror -c main.cpp -o build/main.o
	gcc -Wall -Werror -c addition.h -o build/calc.o
	mkdir -p bin
	gcc build/main.o build/addition.h.o -o bin/main

clear: 
	rm -r build