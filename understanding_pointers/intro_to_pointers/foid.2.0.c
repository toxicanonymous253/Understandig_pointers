#include <stdio.h>

int main(void)
{
	int a = 10, *j;
	void *k;
	j = k = &a;

	j++;
	k++;/*cannot increement a void pointer coz the compiler does not know the size*/

	printf("%u %u", j, k);
}