#include <stdio.h>

int *check(int i, int j);

int main(void)
{
	int *c;

	int i = 100, j = 20;

	c = check(i, j);

	printf("%p\n", c);

	return (0);
}

int *check(int i, int j)
{
	int *p;
	int *q;

	p = &i;
	q = &j;

	if (i >= 45)
		return (p);/*Returning the address of */
	else
		return (q);
}