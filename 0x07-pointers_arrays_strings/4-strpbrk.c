#include "main.h"

#define NULL 0

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: segment 1
 * @accept: segment 2
 *
 * Return: char pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}
		i++;
	}
	return (NULL);
}
