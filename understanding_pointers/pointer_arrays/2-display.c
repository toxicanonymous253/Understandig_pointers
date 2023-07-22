#include <stdio.h>

int display (int *n);

int main(void)
{
	int iterator;
	int array[] = {33, 45, 64, 63, 35, 55};

	for (iterator = 0; iterator < 6; iterator++)
	{
		display(&array[iterator]);
	}
	return (0);
}

int display(int *n)
{
	printf("%d\n", *n);
}