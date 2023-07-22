#include <stdio.h>

void swap(int *c, int *d);
void exchange(int **c, int *d);

int main(void)
{
	int a = 10, b = 20;
	int *c = &a, *d = &b;

	printf("Before swap, c = %d, d = %d\n", *c, *d);

	swap(c, d);

	printf("After swap, c = %d d = %d\n", *c, *d);

	return (0);
}

void swap(int *c, int *d)
{
	exchange (&c, d);
}

void exchange(int **c, int *d)
{
	int t;

	t = **c;
	**c = *d;
	*d = t;
}
