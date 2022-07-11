#include <stdio.h>
#include <stdlib.h> // For atoi(), find detail in manual by 'man 3 atoi'
int main(int argc, char *argv[])
{
	int table_AND[2][2];
	int table_OR[2][2];
	int table_XOR[2][2];

	int A, B, V;

	if (argc != 4)
	{
		printf("Usage: %s inputA inputB logicV\n", argv[0]);
		return -1;
	}

	// building the tables
	table_AND[0][0] = 0;
	table_AND[1][0] = 0;
	table_AND[0][1] = 0;
	table_AND[1][1] = 1;

	table_OR[0][0] = 0;
	table_OR[1][0] = 1;
	table_OR[0][1] = 1;
	table_OR[1][1] = 1;

	table_XOR[0][0] = 0;
	table_XOR[1][0] = 1;
	table_XOR[0][1] = 1;
	table_XOR[1][1] = 0;

	// Read the values from OS(argv)
	A = atoi(argv[1]);
	B = atoi(argv[2]);
	V = atoi(argv[3]);

	// Make sure the values are inbound.
	if (A > 0) A = 1;
	if (B > 0) B = 1;
	if (V > 0) V = 1;

	// check Fitting gates
	if (table_AND[A][B] == V) 
	{
		printf("AND\n");
	}

	if (table_OR[A][B] == V) 
	{
		printf("OR\n");
	}

	if (table_XOR[A][B] == V) 
	{
		printf("XOR\n");
	}

	return 0;
}