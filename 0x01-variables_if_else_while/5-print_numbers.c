#include <stdio.h>


/**
 * main - This is the main function
 * Description:  prints sequence of digits then exits
 * Return: 0
 */
int main(void)
{
	char n = '0';

	while (n <= '9')
		putchar(n++);
	n = '\n';
	putchar(n);

	return (0);
}
