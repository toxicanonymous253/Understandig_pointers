#include <stdio.h>

int main(void)
{
	int a[][4] = {
		{5, 7, 5, 9},
		{4, 6, 3, 1},
		{2, }
	};
	int *p;
	int (*q)[4];
	p = (int *)a;
	q = a;

	printf("%p")
}