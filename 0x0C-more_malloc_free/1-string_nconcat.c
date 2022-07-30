#include "main.h"

#include <stdlib.h>


/**
 * string_nconcat - concatenates 2 strings
 * @s1: pointer to str 1
 * @s2: pointer to str 2
 * @n: number of bytes
 *
 * Return: Pointer to char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c = malloc(sizeof(*s1) + n + 1);
	int i, j;
	unsigned int l;

	s1 = (s1 == NULL) ? "" : s1;
	s2 = (s2 == NULL) ? "" : s2;
	for (l = 0; s2[l] != '\0'; ++l)
	{}
	n = (n < l) ? n : l;

	if (c)
	{
		for (i = 0; s1[i] != '\0'; i++)
			c[i] = s1[i];
		for (j = 0; j < (int) n; j++)
			c[i + j] = s2[j];
		c[i + j] = '\0';

		return (c);
	}
	else
		return (NULL);
}
