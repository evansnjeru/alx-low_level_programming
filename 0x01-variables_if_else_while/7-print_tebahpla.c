#include <stdio.h>


/**
 * main - This is the main function
 * Description:  prints the alphabet then exits
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
		putchar(c--);
	c = '\n';
	putchar(c);

	return (0);
}
