#include <stdio.h>


/**
 * main - This is the main function
 * Description:  prints the alphabet then exits
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
			putchar(c);
		c++;
	}
	c = '\n';
	putchar(c);

	return (0);
}
