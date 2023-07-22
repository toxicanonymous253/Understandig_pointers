#include <stdio.h>

int main(void)
{
	int a[][4] = {
		{5, 7, 5, 9},
		{4, 6, 3, 1},
		{2, 9, 0, 6},
	};
	int *p;
	int (*q)[4];
	p = (int *)a;
	q = a;

	printf("%p %p\n", p, q);
	p++;
	q++;
	printf("%p %p\n", p, q);
}