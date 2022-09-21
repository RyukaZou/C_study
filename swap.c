#include <stdio.h>

void swap_p(int *v1, int *v2)
{
	int v_buf;
	v_buf = *v1;
	*v1 = *v2;
	*v2 = v_buf;
}

void swap_i(int v1, int v2)
{
	int v_buf;
	v_buf = v1;
	v1 = v2;
	v2 = v_buf;
}

int main()
{
	int v1, v2;

	v1 = 1;
	v2 = 5;

	printf("v1 = %d    v2 = %d\n", v1, v2);
	//swap_i(v1, v2);
	swap_p(&v1, &v2);
	printf("v1 = %d    v2 = %d\n", v1, v2);


	return 0;
}