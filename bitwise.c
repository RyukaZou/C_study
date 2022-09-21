#include <stdio.h>

int main()
{
	int index;
    unsigned char bitmask;

	unsigned char c0, c1, c2, c3;

	c0 = 8;
	c0 = 0x8;
	// Assign binary value
	c0 = 0b1000;
	printf("%u\n", c0);
	
	c0 = '0';	
	// print bit map
	bitmask = 1 << (8*sizeof(c0) - 1);
	while (bitmask)
	{
		printf("%d ", (bitmask & c0)? 1 : 0);
		bitmask = bitmask >> 1;
	}
	printf("\n");

	// or |
	c0 = 2;
	c1 = 4;
	c0 = 0b00000010;
	c1 = 0b00000100;

	c2 = c0 | c1;
	printf("or %u\n", c2);

	// and &
	c0 = 2;
	c1 = 6;
	c0 = 0b00000010;
	c1 = 0b00000110;

	c2 = c0 & c1;
	printf("and %u\n", c2);

	// xor ^
	c0 = 2;
	c1 = 6;
	c0 = 0b00000010;
	c1 = 0b00000110;

	c2 = c0 ^ c1;
	printf("and %u\n", c2);


}