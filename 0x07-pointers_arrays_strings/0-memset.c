#include "main.h"


/**
 * _memset - fills memory with a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: Pointer to char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < (int) n; i++)
		*(s + i) = b;

	return (s);
}
