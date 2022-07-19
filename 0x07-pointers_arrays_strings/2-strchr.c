#include "main.h"
#include <stddef.h>


/**
 * _strchr - locates a character in a string
 * @s: pointer memory area 1
 * @c: pointer memory area 2
 *
 * Return: Pointer to char
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *d = NULL, *t;

	do {
		t = s + i;
		if (*t == c)
			d = t;
		i++;
	} while (!d && *t != '\0');

	return (d);
}
