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
		putchar(c++);
	c = 'A';
	while (c <= 'Z')
		putchar(c++);
	c = '\n';
	putchar(c);

	return (0);
}
