
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>

int main()
{
	int fd = -1;

	// fd = open("filedescripter.txt", O_CREAT | O_RDWR, S_IREAD | S_IWRITE);
	fd = open("filedescripter.txt", O_RDWR|O_APPEND, S_IREAD | S_IWRITE);
	// fd = open("filedescripter.txt", O_CREAT|O_EXCL);
	if (fd < 0)
	{
		printf("errno = %d [%s]\n", errno, strerror(errno));
	}
	printf("fd = %d\n", fd);

	dprintf(fd, "Hello World\n");

	if (fd > 0) 
		close(fd);
	return 0;
}