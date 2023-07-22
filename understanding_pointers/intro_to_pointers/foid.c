#include <stdio.h>

int main(void)
{
	float i = 10, *j;
	void *k;
	k = &i;
	j = k;
	printf("%.2f\n", *j);
	return (0);
}
