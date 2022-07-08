CC = gcc
CLINK = gcc
CFLAG = -g -O2
LIB = -lm

all: return_value

return_value: return_value.c
	$(CC) $(CFLAG) -c return_value.c
	$(CLINK) -o return_value return_value.o 

clean:
	rm *.o
