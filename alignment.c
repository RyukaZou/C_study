#include <stdio.h>
#include <stdlib.h>
#include <stdalign.h>
struct S 
{
	int i;
	alignas(32) double d;
	char c;
};

int main()
{
	size_t alignment = alignof(short);
	unsigned char case_a[sizeof(struct S)];
	_Alignas(struct S) unsigned char case_b[sizeof(struct S)];

	struct S *p_a = (struct S *) case_a;
	struct S *p_b = (struct S *) case_b;

	//posix_memalign((void **) p_b, 64, sizeof(struct S));
	
	printf("%p %p\n", case_a, case_b);
	printf("%p %p\n", p_a, p_b);

	printf("sizeof(struct S): %lu\n", sizeof(struct S)); // 4 bytes for int value + 8 for double + 1 for char
	printf("alignof(struct S): %d\n", alignof(struct S));



	printf("alignof(short) = %d\n", alignment); // 2
	printf("alignof(int) = %d\n", alignof(int)); // 4
	printf("alignof(long) = %d\n", alignof(long)); // 4
	printf("alignof(float) = %d\n", alignof(float)); // 4
	printf("alignof(double) = %d\n", alignof(double)); // 8
	
	return 0;
}
