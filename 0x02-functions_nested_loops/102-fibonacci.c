#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>


/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long x = 1, y = 1, temp;

	printf("%ld", y);
	for (i = 0; i <= 48; i++)
	{
		temp = x;
		x = y;
		y = x + temp;
		printf(", %ld", y);
	}
	printf("\n");

	return (0);
}
