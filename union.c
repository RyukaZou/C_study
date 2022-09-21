#include <stdio.h>


int main()
{
	struct S
	{
		int i;
		float f;
	};

	union U
	{
		int I;
		long L;
	};

	// long unsigned
	printf("sizeof(S) = %lu  sizeof(U) = %lu\n", sizeof(struct S), sizeof(union U));

	return 0;
}
