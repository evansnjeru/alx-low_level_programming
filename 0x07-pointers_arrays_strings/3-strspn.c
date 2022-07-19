#include "main.h"


/**
 * _strspn - gets length of prefix substring
 * @s: segment 1
 * @accept: segment 2
 *
 * Return: Number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	char a = *s;
	char b = *accept;
	int i = 0, accu = 0, j;

	while (a != '\0')
	{
		a = *(s + i++);
		j = 0;

		while (b != '\0')
		{
			b = *(accept + j++);
			if (a == b)
			{
				accu++;
				break;
			}
		}
	}

	return (accu);
}
