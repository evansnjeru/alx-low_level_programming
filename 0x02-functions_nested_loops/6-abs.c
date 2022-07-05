#include "main.h"

/**
 * _abs - check if characteris lowercase
 * @n: number
 *
 * Description: prints sign then returns status depending on the value of @n
 * Return: 1 or 0 or -1
 */
int _abs(int n)
{
	return ((n < 0) ? (-1 * n) : n);
}
