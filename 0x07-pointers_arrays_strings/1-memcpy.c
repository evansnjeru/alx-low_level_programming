#include "main.h"


/**
 * _memcpy - copies memory area
 * @dest: pointer memory area 1
 * @src: pointer memory area 2
 * @n: number of bytes
 *
 * Return: Pointer to char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < (int) n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
