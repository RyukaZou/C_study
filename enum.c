#include <stdio.h>

int main()
{
	enum Weekday {mon, tue, wed, thu, fri, sat, sun};

	enum Weekday today;

	today = fri;

	printf("%d\n", today);


	return 0;
}
