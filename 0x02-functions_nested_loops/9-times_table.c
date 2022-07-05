#include "main.h"


/**
 * times_table - wow
 *
 * Description: prints the times table then exits
 * Return: None
 */
void times_table(void)
{
	int i, j, d1, d2, x;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			x = i * j;
			d1 = x % 10;
			d2 = (x / 10) % 10;

			if (d2 != 0)
				_putchar(d2 + '0');
			else if (j > 0)
				_putchar(' ');
			_putchar(d1 + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
