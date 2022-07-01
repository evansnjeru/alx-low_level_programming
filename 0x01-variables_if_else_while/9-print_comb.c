#include <stdio.h>


/**
 * main - This is the main function
 * Description:  prints sequence of digits then exits
 * Return: 0
 */
int main(void)
{
	int n = 48, t;

	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		{
			t = 44;
			putchar(t);
			t = 32;
			putchar(t);
		}
		n++;
	}
	n = '\n';
	putchar(n);

	return (0);
}
