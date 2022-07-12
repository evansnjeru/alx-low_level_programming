#include "main.h"

#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s:  string
 *
 * Return: None
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i >= 0; i--)
		putchar(*(s + i));

	putchar('\n');
}
