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
		int i;
		float f;
	};

	// long unsigned
	printf("sizeof(S) = %lu  sizeof(U) = %lu\n", sizeof(struct S), sizeof(union U));

	return 0;
}
