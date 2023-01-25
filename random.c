#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main()
{
	int R; 
	struct timespec t;
	clock_gettime(CLOCK_MONOTONIC, &t);
	srandom(t.tv_nsec);
	R = random()%2;
	switch(R)
	{
		case 0:
		printf("NO");
		break;
		case 1:
		printf("YES");
		break;

	}
	printf("%d\n", R);
	R = random();
	printf("%d\n", R);
	R = random();
	printf("%d\n", R);
}


