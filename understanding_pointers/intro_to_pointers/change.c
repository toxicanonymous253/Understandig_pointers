#include <stdio.h>

int main(void)
{
	int a = 10, *b, **c, ***d, ****e;

	b = &a;
	c = &b;
	d = &c;
	e = &d;

	printf("a = %d, b = %p, c = %p, d = %p, e = %p\n", a, b, c, d, e);
	printf("%d %d %d\n", a, a + *b, **c + ***d + ****e);

	return (0);
}
