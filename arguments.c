#include <stdio.h>

// argument 引數 變數 
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i = i + 1)
	{
		printf("%s\n", argv[i]);
	}

	return 0;
}
