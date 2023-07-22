#include <stdio.h>

int before_increment(int *a);
int front_increment(int *b);

int main(void)
{
	int first = 10, second = 12;

	int before = before_increment(&first);
	int after = front_increment(&second);

	printf("%d\n", before);
	printf("%d\n", after);

	return (0);
}

int before_increment(int *a)
{
	return (++(*a));/*Increments the value being pointed to*/
}

int front_increment(int *b)

{
	return (((*b)++));/*Increments the pointer and not the value
	Mostly applicable in array*/
}

