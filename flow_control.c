#include <stdio.h>

int main()
{
	int i;
	char c;

	i = 1;

	// if-else
	if (i > 3)
	{
		printf("i=%d > 3\n", i);
	} else
	{
		printf("i=%d <= 3\n", i);
	}

	if (i > 3)
	{
		printf("i=%d > 3\n", i);
	} else if (i > 0 && i <= 3)
	{
		printf("i=%d  between 0 to 3\n", i);
	} else 
	{
		printf("i=%d is negative\n", i);
	}

	i = 0;
	if (i > 3)
		printf("i=%d > 3\n", i);
	
	printf("the following line\n");


	// // switch
	i = 9;
	switch(i)
	{
		case 1:
			printf("one\n");
			break;
		
		case 2:
			printf("two\n");
			break;
		
		case 3:
			printf("three\n");
			break;

		case 4:
		case 5:
		case 6:
			printf("i am 4 5 6 \n");
			break;

		default:
			printf("I can only count to three.\n");
	}


	c = '2';
	switch(c)
	{
		case '1':
			printf("one\n");
			break;
		
		case '2':
			printf("two\n");
			break;
		
		case '3':
			printf("three\n");
			break;
		
		default:
			printf("I can only read from 1 to 3.\n");
	}
	return 0;

	// while
	i = 0;
	while (i < 100)
	{
		printf("i = %d\n", i);
		if (i == 3)
			break; // stop while

		i = i + 10;
	}


	// do-while
	printf("\n");
	i = 5;
	while(i < 3)
	{
		printf("i = %d\n", i);
		i = i + 1;
	}

	printf("\n");
	i = 5;
	do
	{
		printf("i = %d\n", i);
		i = i + 1;
	} while(i < 3);

	
	// for-loop
	for (i = 0; i < 10; i++)
	{
		printf("loop %d\n", i);

	}
	
	return 0;

}