#include "main.h"

/**
 * _isalpha - check if characteris lowercase
 * @c: character
 *
 * Description: returns 1 or 0 depending whether or not @c is an alphabet
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	c = (int) c;
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90) ? 1 : 0);
}
