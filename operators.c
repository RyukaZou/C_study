#include <stdio.h>

int main()
{
	int i, j, k;
	int r;
	char afh[] = "afh";
	char xyz[] = "xyz";
	char *p;

	int max;

	if (0)
	{
	// condition
	i = 3;
	j = 5;
	max = i > j ? i : j;
	printf("max = %d\n", max);

	// ++ --
	i = 0;
	r = 0;
	r = i++; // i++ ~ i = i + 1
	printf("result = %d i = %d\n", r, i);

	i = 0;
	r = 0;
	r = i--;
	printf("result = %d i = %d\n", r, i);
	
	i = 0;
	r = 0;
	r = ++i; // ++i ~ i = i + 1
	printf("result = %d i = %d\n", r, i);
	
	i = 0;
	r = 0;
	r = --i; 
	printf("result = %d i = %d\n", r, i);
	}

	p = afh;
	printf("%c\n", *p);
	printf("%c\n", ++*p); // ++*p = ++(*p)
	printf("%s\n\n", afh);

	p = afh;
	printf("%p - %c\n", p, *p);
	printf("%p - %c\n", p, *p++ ); // *p++ = *(p++)
	printf("%p\n", p);
	printf("%s\n", afh);

	// sequence
	i = 11;
	j = 22;
	k = 33;
	
	printf("\n");
	printf("i=%d j=%d k=%d\n", i, j, k);
	printf("%d\n", ++i + ++j * --k);
	printf("i=%d j=%d k=%d\n", i, j, k);
	// printf("%d\n", ++i + ++j * --k);
	printf("%d\n", i++ + j++ * k--);
	printf("i=%d j=%d k=%d\n", i, j, k);

	i = 5;
	printf("\n");
	printf("%d\n", i++ * i++);

	return 0;
}

