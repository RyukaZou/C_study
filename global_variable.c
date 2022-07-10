#include <stdio.h>

int i_am_global;

void set_global_v(int v)
{
	i_am_global = v;
}

int main()
{
	i_am_global = 3;
	printf("%d\n", i_am_global);

	set_global_v(6);
	printf("%d\n", i_am_global);

	return 0;
}
