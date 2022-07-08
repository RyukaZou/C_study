#include <stdio.h>

int main()
{
	int i;
	char *p;
	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	p = NULL;
	printf("%d - %p\n", __LINE__, p);
	printf("%d - %d\n", __LINE__, p);

	p = str;
	// p is the pointer that storages a memory address
	// * operator is to read the value from pointer address
	printf("%d - [%p] [%c]\n", __LINE__, p, *p);
	printf("%d - [%p] [%c]\n", __LINE__, p+1, *(p+1));

	for (i = 0, p = str; i < 26; i = i + 1, p = p + 1)
	{
		printf("[%d] [%p] [%c]\n", i, p, *p);
	}

	return 0;
}
