#include "main.h"

#include <stdio.h>


/**
 * print_diagsums - prints diagsums
 * @a: matrix
 * @size: matrix size
 *
 * Return: char pointer
 */
void print_diagsums(int *a, int size)
{
	int i, x, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		x = size * i + i;
		sum1 += *(a + x);
	}

	for (i = 0; i < size; i++)
	{
		x = size * (i + 1) - (i + 1);
		sum2 += *(a + x);
	}

	printf("%d, %d\n", sum1, sum2);
}
