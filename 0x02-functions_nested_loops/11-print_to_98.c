#include "main.h"
#include "6-abs.c"


/**
 * print_number - prints an integer, comma and space
 * @n: integer
 *
 * Return: None
 */
void print_number(int n)
{
	int d1, d2, d3;

	if (n < 0)
		_putchar('-');

	n = _abs(n);
	d1 = n % 10;
	d2 = (n / 10) % 10;
	d3 = (n / 100) % 10;

	if (d3 != 0)
	{
		_putchar(d3 + '0');
	}
	if (d2 != 0 || (d3 != 0 && d2 == 0))
	{
		_putchar(d2 + '0');
	}
	_putchar(d1 + '0');
}


/**
 * print_to_98 - prints integers to 98
 * @n: integer
 *
 * Return: None
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			print_number(i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			print_number(i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
