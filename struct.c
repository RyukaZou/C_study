#include <stdio.h>

struct location
{
	float x;
	float y;
	float z;
	float *t;
};

int main()
{
	float time;
	struct location A,B;

	A.x = 1.0;
	A.y = 3.0;
	A.z = 5.0;
	A.t = &time;

	printf("A.x = %f A.y = %f\n", A.x, A.y);
	B = A;
	printf("B.x = %f B.y = %f\n", B.x, B.y);
	return 0;
}
