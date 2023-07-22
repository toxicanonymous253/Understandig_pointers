#include <stdio.h>

int main(void)
{
	char c, *cc;
	int i;
	long l;
	float f;

	c = 'Z';
	i = 15;
	l = 77777;
	f = 3.14;

	cc = &c;
	printf("c = %c, cc = %p\n", *cc, cc);

	cc = &i;
	printf("i = %d, i = %p\n", *cc, cc);

	cc = &l;
	printf("l = %ld, l = %p\n", *cc, cc);

	cc = &f;
	printf("f = %f, f = %p\n", *cc, cc);

	return (0);
}

/*Compilation error*/