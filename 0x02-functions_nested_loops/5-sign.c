#include "main.h"

/**
 * print_sign - check if characteris lowercase
 * @n: number
 *
 * Description: prints sign then returns status depending on the value of @n
 * Return: 1 or 0 or -1
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(43);
		return (1);
	}
}
