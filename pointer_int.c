#include <stdio.h>

int main()
{
	int *i;
	int array[10];

	array[0] = 22;
	array[1] = 43;
	array[2] = 64;
	array[3] = 85;
	array[4] = 106;
	array[5] = 127;

	printf("i[%p] array[%p]\n", i, array);
	i = array;
	printf("i[%p] array[%p]\n\n", i, array);

	printf("[%p] [%d]\n", i, *i);
	i = i + 1;
	printf("[%p] [%d]\n", i, *i);
	i = i + 1;
	printf("[%p] [%d]\n", i, *i);
	i = i + 1;
	printf("[%p] [%d]\n", i, *i);
	i = i + 1;
	printf("[%p] [%d]\n", i, *i);
	i = i + 1;
	printf("[%p] [%d]\n", i, *i);
	i = i + 1;


	return 0;
}
