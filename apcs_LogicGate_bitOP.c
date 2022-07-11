#include <stdio.h>
#include <stdlib.h> // For atoi(), find detail in manual by 'man 3 atoi'
int main(int argc, char *argv[])
{
	unsigned char A, B, V;

	if (argc != 4)
	{
		printf("Usage: %s inputA inputB logicV\n", argv[0]);
		return -1;
	}

#if 0
	A = atoi(argv[1]);
	B = atoi(argv[2]);
	V = atoi(argv[3]);

	if (A != 0) A = 1;
	if (B != 0) B = 1;
	if (V != 0) V = 1;
#else
	A = !(atoi(argv[1]) == 0);
	B = !(atoi(argv[2]) == 0);
	V = !(atoi(argv[3]) == 0);
#endif 

	if ((A & B) == V)
	{
		printf("AND\n");
	}

	if ((A | B) == V)
	{
		printf("OR\n");
	}

	if ((A & B) == V)
	{
		printf("XOR\n");
	}
}
