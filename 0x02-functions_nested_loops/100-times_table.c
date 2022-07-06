#include "main.h"


/**
 * print_times_table - wow
 * @n: integer <15 >0
 *
 * Description: prints the times table then exits
 * Return: None
 */
void print_times_table(int n)
{
	int i, j, d1, d2, d3, x, y;

	if (n < 15 && n > 0)
	{
		y = n + 1;
		for (i = 0; i < y; i++)
		{
			for (j = 0; j < y; j++)
			{
				x = i * j;
				d1 = x % 10;
				d2 = (x / 10) % 10;
				d3 = (x / 100) % 10;

				if (d3 != 0)
					_putchar(d3 + '0');
				else if (j > 0)
					_putchar(' ');
				if (d2 != 0 || (d2 == 0 && d3 != 0))
					_putchar(d2 + '0');
				else if (j > 0)
					_putchar(' ');
				_putchar(d1 + '0');
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else if (n == 0)
	{
		_putchar(n + '0');
		_putchar('\n');
	}
}
