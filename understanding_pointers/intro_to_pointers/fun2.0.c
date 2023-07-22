#include <stdio.h>

void fun(int **k);

int main(void)
{
	int *j;

	fun(&j);


	return (0);
}

void fun(int **k)
{
	int a = 10;
	int *j;
	j = &a;/*Pointer to an int stores the address of an int value*/
	int **p = &j;/*pointer to a pointer to an integer stores the address of a pointer
	pointing to an int value*/
	printf("%p\n", &j);
	printf("%p\n", *&p);
	printf("%p\n", &a);
	printf("%d\n", *j);//output: 10
	printf("%d\n", **p);//output: 10
	printf("%d\n", a);//output: 10
}
