#include "main.h"

#include <stdio.h>


/**
 * print_alphabet - This is the main function
 * Description:  prints the alphabet then exits
 * Return: Always 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
		putchar(c++);
	c = '\n';
	putchar(c);
}
