#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
	int R; 
	int cy, cn;
	float dt;
	struct timespec t1, t2;
    int i; // Set loop
	cy = 0;
	cn = 0;
	clock_gettime(CLOCK_MONOTONIC, &t1);
	srandom(t1.tv_nsec);
	for (i = 0; i < 100000; i++) //Loop # amount of time
    {
	    R = random()%2;
	    switch(R)
	    {
		    case 0:
		 	//cn = cn + 1;
			cn++;
			printf("NO\n");
		    break;
		    case 1:
		 	//cy = cy + 1;
			cy++;   
			printf("YES\n");
		    break;
        }    
	}
	clock_gettime(CLOCK_MONOTONIC, &t2);
	dt =  ( 1.e-9 * (t2.tv_nsec - t1.tv_nsec) + (t2.tv_sec - t1.tv_sec)) / 100;
	printf("dt = %e\n", dt);
	if(cy > cn)
	{
		printf("YES\n");
	} 
	else if(cn > cy)
	{
		printf("NO\n");
	} 
	else 
	{
		printf("Same\n");
	}
	// print ans

}
