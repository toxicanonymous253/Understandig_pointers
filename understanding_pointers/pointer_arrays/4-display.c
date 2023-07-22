#include <stdio.h>

void display(int *j, int size);

int main(void)
{
	int num[] = {24, 34, 12, 44, 56, 17};
	display(&num[0], 6);/*The same as the one below*/
	display(num, 6);

	return (0);
}
void display(int *j, int size)
{
	int i = 0;

	while (i < size)
	{
		printf("Element %d\n", *j);
		i++;
		j++;
	}
}
