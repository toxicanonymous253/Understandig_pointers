#include <stdio.h>

void swap(int c, int d);
void change (int c, int d);
int main(void)
{
	int c = 10, d = 20;

	printf("We are in main()\n");
	printf("Address of c = %p Address of d = %p\n", &c, &d);

	swap(c, d);

	printf("Back to main()\n");
	printf("After swap(), c = %d, d = %d\n", c, d);

}

void swap(int c, int d)
{
	printf("We are in swap()\n");
	printf("Address of c = %p Address of d = %p\n", &c, &d);
	printf("Before change(), c = %d d = %d\n", c, d);
	
	change(c, d);
	
	printf("Back to swap()\n");
	printf("After change(), c= %d d = %d\n", c ,d);
}

void change (int c, int d)
{
	int t;

	printf("We are in change()\n");
	printf("Address of c = %p Address of d = %p\n", &c, &d);

	t = c;
	c = d;
	d = t;

	printf("After interchange, c = %d d = %d\n", c, d);
}