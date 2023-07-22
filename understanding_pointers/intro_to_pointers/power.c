#include <stdio.h>

int power(int **ptr);

int main(void)
{
	int a = 5, *aa;

	aa = &a;

	a = power(&aa);

	printf("a = %d aa = %p\n", a, aa);

	return (0);
}

int power(int **ptr)
{
	int b;

	b = **ptr * **ptr;

	return (b);
}
