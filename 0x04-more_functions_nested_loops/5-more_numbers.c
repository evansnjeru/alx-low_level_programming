#include "main.h"

/**
 * more_numbers - print numbers 0 - 14
 *
 * Return: None
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');

			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
