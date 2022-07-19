#include <stdio.h>

int main()
{
	unsigned char a;
	int i;
	short si;
	long li;
	float c;
	char str[] = "Hello!";

	// print the memory size of variables
	printf("[char] %d\n", sizeof(a));
	printf("[short] %d\n", sizeof(si));
	printf("[int] %d\n", sizeof(i));
	printf("[long] %d\n", sizeof(li));
	printf("[float] %d\n", sizeof(c));

	// assign the value to variable
	//a = 101;
	a = 'e';
	// i = 33;
	// c = 0.0000000000344444445679180198019890818980;

	// print the variable with different type of format
	printf("Da = %d\n", a);
	printf("Oa = %o\n", a);
	printf("Xa = %x\n", a);
	printf("Ca = %c\n", a);
	// printf("b = %d\n", b);
	// printf("c = %f\n", c);
	// printf("str %s\n", str);

	//printf("b = %05d\n", b);
	//printf("str %.2s\n", str);
	
	// printf("\n");
	// printf("Fc = %12.11f\n", c);
	// printf("Ec = %e\n", c);
	// printf("Gc = %g\n", c);
	return 0;
}
