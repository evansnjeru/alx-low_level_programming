#include <stdio.h>


/**
 * main - This is the main function
 * Description:  prints sequence of digits then exits
 * Return: 0
 */
int main(void)
{
	int n = 48;

	while (n < 58)
		putchar(n++);
	n = '\n';
	putchar(n);

	return (0);
}
