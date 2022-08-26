#include <stdio.h>

int main()
{
	int *i, **p;
	int array[10];

	printf("address of the pointer i[%p]\n\n", &i);
	printf("address of the pointer array[%p]\n\n", &array);
	
	array[0] = 22;
	array[1] = 43;
	array[2] = 64;
	array[3] = 85;
	array[4] = 106;
	array[5] = 127;

	printf("contain of the pointer i[%p] array[%p]\n", i, array);
	i = array;
	printf("contain of the pointer i[%p] array[%p]\n\n", i, array);

	printf("contain of the pointer i[%p] the value of *i[%d]\n", i, *i);
	i = i + 1;
	printf("contain of the pointer i[%p] the value of *i[%d]\n", i, *i);
	i = i + 1;
	printf("contain of the pointer i[%p] the value of *i[%d]\n", i, *i);
	i = i + 1;
	printf("contain of the pointer i[%p] the value of *i[%d]\n", i, *i);
	i = i + 1;
	printf("contain of the pointer i[%p] the value of *i[%d]\n", i, *i);
	i = i + 1;
	printf("contain of the pointer i[%p] the value of *i[%d]\n", i, *i);
	i = i + 1;
	printf("contain of the pointer i[%p] the value of *i[%d]\n", i, *i);


	p = (int **) malloc(10 * sizeof(int *));

	return 0;
}
