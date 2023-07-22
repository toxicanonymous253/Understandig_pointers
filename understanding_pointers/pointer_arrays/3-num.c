#include <stdio.h>

int main(void)
{
	int num[] = {24, 34, 12, 44, 56, 17};
	int i = 0, *j;

	j = &num[0];/*Assign address of 0th element*/

	while (i < 5)
	{
		printf("Address = %p\n", &num[i]);
		printf("Element = %d\n", *j);

		i++;
		++j;/*Increment pointer to the next location*/
	}
	return (0);
}
