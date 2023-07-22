#include <stdio.h>

int *fun();

int main(void)
{
	int *p;
	//int *fun();
	p = fun();
	printf("%p\n", p);
	printf("%d\n", *p);

	return (0);
}

int *fun()
{
	static int i = 20;
	return (&i);
}