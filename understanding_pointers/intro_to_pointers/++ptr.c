#include <stdio.h>

int increement(int *r);

int main(void)
{
	int i = 10;

	printf("%d\n", i);
	int update = increement(&i);
	printf("%d\n", update);
	return (0);
}

int increement(int *r)
{
	//return (++(*r));

	return (1 + (*r));
}