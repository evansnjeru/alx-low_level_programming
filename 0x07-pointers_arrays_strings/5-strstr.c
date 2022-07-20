#include "main.h"

#include <stddef.h>


/**
 * _strstr - locates a substring within a larger string
 * @haystack: string
 * @needle: substring
 *
 * Return: char pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, accu = 0, len, x;

	if (*(needle + j) == '\0')
		return (haystack);

	for (len = 0; *(needle + len) != '\0'; ++len)
	{}

	while (*(haystack + i) != '\0')
	{
		j = 0;
		accu = 0;
		x = i;

		while (*(needle + j) != '\0')
		{
			if (*(haystack + i) == *(needle + j))
			{
				if (++accu == len)
					return (haystack + x);
				i++;
			} else
				break;
			j++;
		}
		i++;
	}
	return (NULL);
}
