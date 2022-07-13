#include <stdio.h>
#include <string.h>

// Ref https://zh.wikipedia.org/zh-tw/%E5%96%AE%E7%B2%BE%E5%BA%A6%E6%B5%AE%E9%BB%9E%E6%95%B8

int main()
{
	/*             S [7  6  5  4  3  2  1  0][22 21 20 19 18 17 16 15 14 13 12 11 10  9  8  7  6  5  4  3  2  1  0]  */ 
	int map[32] = {0, 0, 1, 1, 1, 1, 1, 0, 0,  0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int i, storage, index;
	float *f;

	f = (float *) &storage;
	storage = 0;
	i = 1;

	for (index = 0; index < 32; index++)
	{
		if (map[31-index] == 1)
		{
			storage = storage | i; 
		}
		i = i << 1;
	}

	printf("%d\n", storage);	
	printf("%f\n", *f);	

	return 0;
}
