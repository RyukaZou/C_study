
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int file_to_stdout;
	file_to_stdout = 0;

	dprintf(file_to_stdout, "Hello World\n");

	return 0;
}