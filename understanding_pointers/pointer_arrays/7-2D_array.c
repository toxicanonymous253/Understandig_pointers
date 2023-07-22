#include <stdio.h>

int main(void)
{
	int i, j;
	int stud[5][2] = {
		{1234, 56},
		{1212, 33},
		{1424, 80},
		{1312, 78},
		{1203, 75},
	};


	for (i = 0; i < 5; i++)
	{
		printf("\n");
		for (j = 0; j < 2; j++)
		{
			printf("%d ", *(stud[i] + j));
		}
	}
	printf("\n");

	return (0);
}
