
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char data[1024];
	fp = fopen("stream.txt", "r");

	// if (fputs("Hello, World!\n", file_to_stdout) == EOF)
	// {
	// 	return -1;
	// }
	fscanf(fp,"%s", data);
	printf("%s\n", data);

	return 0;
}