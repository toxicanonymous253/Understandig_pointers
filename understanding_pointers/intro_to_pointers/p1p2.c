#include <stdio.h>

int main(void)
{
	//No compilation error spotted
	int *p1, i = 25;
	void *p2;
	p1 = &i;
	p2 = &i;
	p1 = p2;
	p2 = p1;

	return (0);
}