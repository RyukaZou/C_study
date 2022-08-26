#include <stdio.h>
#include <stdlib.h>

// pointer 
void f(char *p)
{
	printf("in function before: %p\n", p);
	p = malloc(1024);
	printf("in function after: %p\n", p);
}

int main()
{
	char *p;

	p = NULL;
	printf("in main before: %p\n", p);
	f(p);
	printf("in main after: %p\n", p);

	return 0;
}