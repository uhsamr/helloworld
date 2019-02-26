all:

	gcc -I . -c function.c
	gcc -I . -c helloworld.c
	gcc function.o helloworld.o -o TEST