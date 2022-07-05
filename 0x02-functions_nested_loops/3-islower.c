#include "main.h"

/**
 * _islower - check if characteris lowercase
 * @c: character
 *
 * Description: returns 1 or 0 depending whether or not @c is lowercase
 * Return: 1 or 0
 */
int _islower(int c)
{
	c = (int) c;
	return ((c >= 97 && c <= 122) ? 1 : 0);
}
