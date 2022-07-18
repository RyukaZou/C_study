#include <stdio.h>

int main()
{
	int index;
    unsigned char bitmask;

	unsigned char c0, c1, c2, c3;

	c0 = 'A'; 
	
	// print bit map
	bitmask = 1 << (8*sizeof(c0) - 1);
	while (bitmask)
	{
		printf("%d ", (bitmask & c0)? 1 : 0);
		bitmask = bitmask >> 1;
	}
	printf("\n");

	c0 = 'a'; 
	
	// print bit map
	bitmask = 1 << (8*sizeof(c0) - 1);
	while (bitmask)
	{
		printf("%d ", (bitmask & c0)? 1 : 0);
		bitmask = bitmask >> 1;
	}
	printf("\n");


	// converting case

	// to capital 
	c0 = 'a'; 
	bitmask = 0b11011111;
	c1 = c0 & bitmask;
	printf("to capital = %c\n", c1);

	// to convert 
	c0 = 'b'; 
	bitmask = 0b00100000;
	c1 = c0 ^ bitmask;
	printf("to convert = %c\n", c1);

	// to convert 
	c0 = '1'; 
	bitmask = 0b00100000;
	c1 = c0 | bitmask;
	printf("to lower case = %c\n", c1);


}