#include "main.h"

/**
 * _isdigit - Indicates if a digit
 * @c: integer representing char
 *
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	return ((c > 47 && c < 58) ? 1 : 0);
}
