#include <stdio.h>

int main(void)
{
	int num[] = {24, 34, 12, 44, 56, 17};
	int i = 0;

	while (i < 6)
	{
		printf("Address = %p\n", &num[i]);
		printf("Element = %d ", num[i]);
		printf("%d ", *(num + i));
		printf("%d ", *(i + num));
		printf("%d\n", i[num]);
		i++;
	}
	return (0);
}