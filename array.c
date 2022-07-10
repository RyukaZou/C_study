#include <stdio.h>

int main()
{
	char array[20];
	char c, d, e, f;
	char *p;

	array[0] = 'a';
	array[1] = 'b';
	array[2] = 'c';
	array[3] = 'd';
	array[4] = 'e';
	array[5] = 'f';
	array[6] = 'g';
	array[7] = '\0'; // terminator
	c = 'c';
	d = 'd';
	e = 'e';
	f = 'f';


	p = array;
	printf("array[%p] p[%p]\n", array, p);

	p = p + 1;
	printf("array[%p] p[%p]\n", array, p);

	p = &c;
	printf("p[%p] %c %c\n", p, c, *p);

	p = &d;
	printf("p[%p] %c %c\n", p, d, *p);

	p = &e;
	printf("p[%p] %c %c\n", p, e, *p);

	p = &f;
	printf("p[%p] %c %c\n", p, f, *p);


	p = &(array[3]);
	printf("p[%p] %c %s\n", p, *p, array);

	return 0;
}
