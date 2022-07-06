#include <stdio.h>


/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long x = 1;
	unsigned long y = 2;
	unsigned long accu = x + y;
	int i;
	unsigned long m, n, p, carry;

	printf("%lu, %lu, ", x, y);

	for (i = 3; i <= 91; i++)
	{
		printf("%lu, ", accu);

		x = y;
		y = accu;
		accu = x + y;
	}
	m = x % 1000;
	x /= 1000;
	n = y % 1000;
	y /= 1000;

	while (i <= 98)
	{
		carry = (m + n) / 1000;
		p = (m + n) - carry * 1000;
		accu = (x + y) + carry;
		m = n;
		n = p;
		x = y;
		y = accu;
		if (p >= 100)
			printf("%lu%lu", accu, p);
		else
			printf("%lu0%lu", accu, p);
		if (i != 98)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
