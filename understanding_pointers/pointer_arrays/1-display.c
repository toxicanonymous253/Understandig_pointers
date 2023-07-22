#include <stdio.h>

void display(int m);

int main(void)
{
	int i;
	int marks[] = {55, 65, 32, 45, 56, 75, 24};

	for (i = 0; i < 7; i++)
	{
		display(marks[i]);
	}

	return (0);
}

void display(int m)
{
	printf("%d\n", m);
}
