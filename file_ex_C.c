
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;

	fp = fopen("stream.txt", "w");

	// if (fputs("Hello, World!\n", file_to_stdout) == EOF)
	// {
	// 	return -1;
	// }
	fprintf(fp, "Hello World\n");

	fclose(fp);
	return 0;
}