#include <stdio.h>

int main(void)
{
	int stud[5][2] = {
		{1234, 56},
		{1212, 33},
		{1424, 80},
		{1312, 78},
		{1203, 75},
	};
	
int i, j;

for (i = 0; i < 5; i++)
{
	printf("Address of %d 1-D array = %p\n", i, stud[i]);
}

	return (0);
}