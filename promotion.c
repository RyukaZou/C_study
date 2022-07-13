#include <stdio.h>

int main()
{
	int index;
	unsigned int mask;
#ifdef US
	unsigned int ref, i;
	unsigned char a, b, c, result;
#else
 	int ref, i;
	signed char a, b, c, result;
#endif
	a = 96;
	b = 4;
	c = 1;

	result = a * b / c;
	printf("Result = %d\n", result);	
	mask = 1 << (8*sizeof(result)-1);
	for (index = 0; index < 8*sizeof(result); index++)
	{
		i = result & mask; 
		if (i != 0)
			printf("1 ");
		else 
			printf("0 ");

		mask = mask >> 1;
	}
	printf("\n");

	ref = a * b / c;
	printf("Ref integer = %d\n", ref);	
	mask = 1 << (8*sizeof(ref)-1);
	for (index = 0; index < (8*sizeof(ref)); index++)
	{
		i = ref & mask; 
		printf("%d ", i ? 1 : 0);
		mask = mask >> 1;
	}
	printf("\n");
}

// char    int
// c0 -> ffffffc0
// 80 -> ffffff80
// 61 -> 00000061