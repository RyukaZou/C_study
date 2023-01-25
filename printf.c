#include <stdio.h>

int main()
{
	unsigned char a;
	// unsigned char is 1 byte has 8 bit, total 0>255.
	// 00000000  -> 0
	// 00000001  -> 1
	// 10000000  -> 128
	// 10000001  -> 129
	// (sigined) char has 8 bit, from -128 to 127
	// 00000000 -> 0
	// 00000001 -> 1
	// 01111111 -> 127
	// 10000000 -> -128
	// 10000001 -> -127
	// 10000010 -> -126
	signed char b;
	int i;
	// 4 byte
	short si;
	// 2 byte
	long li;
	// 8 byte
	float c;
	// 4 byte
	double d;
	// 8 byte
	char str[] = "Hello!";

	// print the memory size of variables
	printf("[char] %d\n", sizeof(a));
	printf("[short] %d\n", sizeof(si));
	printf("[int] %d\n", sizeof(i));
	printf("[long] %d\n", sizeof(li));
	printf("[float] %d\n", sizeof(c));
	printf("[double] %d\n", sizeof(d));
	
	// assign the value to variable
	//a = 101;
	a = 'e';
	b = -127;
	// i = 33;
	// c = 0.0000000000344444445679180198019890818980;

	// print the variable with different type of format
	printf("Da = %d\n", a);
	printf("Ua = %u\n", a);
	printf("Oa = %o\n", a);
	printf("Xa = %x\n", a);
	printf("Ca = %c\n", a);
	printf("Db = %d\n", b);
	printf("Ub = %u\n", b);
	printf("Ob = %o\n", b);
	printf("Xb = %x\n", b);
	printf("Cb = %c\n", b);
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
