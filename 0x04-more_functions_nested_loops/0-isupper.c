#include "main.h"

#include <stdio.h>


/**
 * _isupper - This is the main function
 * @c: integer representing char
 *
 * Return: 1 or 0
 */
int _isupper(int c)
{
	return ((c > 64 && c < 91) ? 1 : 0);
}
