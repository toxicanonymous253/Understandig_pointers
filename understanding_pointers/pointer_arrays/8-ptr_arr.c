#include <stdio.h>

int main(void)
{
	int a[][4] = {
		{5, 7, 5, 9},/*An array of 4 intergers*/
		{4, 6, 3, 1},/*An array of 4 integers*/
		{2, 9, 0, 6},/*An array of 4 integers*/
	};
	int *p;
	int (*q)[4];/*q is a pointer to an array of 4 intergers*/
	p = (int *)a;/*assigns the address of the 1st element of the 2D array 'a' to the pointe 'p'*/
	q = a;/*Aligns the address of the 1st row of the 2D	array 'a' to the pointer 'q'.
	So we are giving 'q' an array to point to since it is a pointer to an array*/

	printf("%p %p\n", p, q);
	p++;
	q++;
	printf("%p %p\n", p, q);
}