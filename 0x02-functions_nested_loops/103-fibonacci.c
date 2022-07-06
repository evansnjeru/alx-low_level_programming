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
	long x = 1, y = 1, temp, accu = 0;

	while (y <= 4000000)
	{
		temp = x;
		x = y;
		y = x + temp;
		if (y % 2 == 0)
		{
			accu += y;
		}
	}
	printf("%ld\n", accu);

	return (0);
}
