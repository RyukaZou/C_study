
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *file_to_stdout = stdout;
	
	// if (fputs("Hello, World!\n", file_to_stdout) == EOF)
	// {
	// 	return -1;
	// }
	fprintf(file_to_stdout, "Hello World\n");

	return 0;
}