#include <stdio.h>

float *multiply(int i, float f);

int main(void)
{
	int i = 3;
	float f = 3.50;
	float *product;
	product = multiply(i, f);
	printf("Product = %p, value at address = %f\n", product, *product);
	return (0);
}

float *multiply(int i, float f)
{
	float product = i * f;

	printf("Product = %f Address of product = %p\n", product, &product);

	return (&product);
}
