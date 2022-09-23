CC = gcc
#CC = clang 
LINK = -lncurses
INCLUDE = -I../include

all: hello color ex1

hello: hello.c 
	$(CC) -c hello.c ${INCLUDE}
	$(CC) -o hello hello.o ${LINK}

ex1: ex1.c
	$(CC) -o ex1 ex1.c ${LINK}

color: color.c	
	$(CC) -o color color.c ${LINK}

clean:
	rm hello.o hello ex1 ex1.o color color.o

install:
	cp hello /tmp/