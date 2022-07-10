#include <stdio.h>

int main()
{
	char a;
	int b;
	float c;
	char str[] = "Hello!";

	a = 't';
	b = 33;
	c = 4.4567;

	printf("a = %c\n", a);
	printf("b = %d\n", b);
	printf("c = %f\n", c);
	printf("str %s\n", str);

	//printf("b = %05d\n", b);
	//printf("c = %10.2f\n", c);
	//printf("str %.2s\n", str);
	return 0;
}
