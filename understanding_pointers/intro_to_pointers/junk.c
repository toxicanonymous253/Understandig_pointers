#include <stdio.h>

int junk(int i, int *j);

int main(void)
{
	int i = -5, j = -2;

	junk(i, &j);

	printf("%d = i, %d = j\n", i, j);
	return (0);
}

int junk(int i, int *j)
{
	i = i * i;
	*j = *j * *j;
}
