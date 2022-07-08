#include "main.h"

/**
 * print_line - draws a straight line
 * @n: length of line
 *
 * Return: None
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');

	_putchar('\n');
}
