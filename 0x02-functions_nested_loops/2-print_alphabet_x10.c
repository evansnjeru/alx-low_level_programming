#include "main.h"
#include "1-alphabet.c" /* Never do this. Very hacky. Very easy for now tho */


/**
 * print_alphabet_x10 - This is the main function
 * Description:  prints the alphabet then exits
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
	}
}
