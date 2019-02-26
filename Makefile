#declare the variable $(variable-name) is used to call variable.
#CC is the type of compiler we are going to be using.
CC=gcc 

#"-Wall" is the warning command
CFLAGS=-c -Wall

# must use # to comment in Makefile.
# these go in order. all runs hello so go to hello
all: hello

# hello runs function.o ad helloworld.o first so go to those
hello: function.o helloworld.o
		$(CC) helloworld.o function.o -o hello

# function.o depends on function.c and runs the next line
function.o: function.c
		$(CC) $(CFLAGS) function.c

# helloworld.o depends on helloworld.c and runs the next line then goes back to hello and runs its next line.
helloworld.o: helloworld.c
		$(CC) $(CFLAGS) helloworld.c

# type make clean to erase all .o and .exe files that were made.
clean:
		rm -rf *o hello
		
# to execute must type make comiple becuase it needs to know to execute second one.
# compile:
		# gcc -I . -c function.c
		# gcc -I . -c helloworld.c
		# gcc function.o helloworld.o -o TEST