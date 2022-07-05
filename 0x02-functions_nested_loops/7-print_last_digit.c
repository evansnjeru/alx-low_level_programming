#include "main.h"
#include "6-abs.c" /* Another one of dem poor practices */

/**
 * print_last_digit - prints last digit of a number
 * @n: number
 *
 * Description: prints last digit of a number
 * Return: digit
 */
int print_last_digit(int n)
{
	n = _abs(n % 10);
	_putchar(n + '0');
	return (n);
}
