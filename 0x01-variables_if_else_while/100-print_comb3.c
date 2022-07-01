#include <stdio.h>


/**
 * main - This is the main function
 * Description:  prints sequence of digits then exits
 * Return: 0
 */
int main(void)
{
	int n, m = 48, i = 0, t;

	while (m <= 57)
	{
		n = 49 + (i++);
		while (n <= 57)
		{
			if (n != 49 || m != 48)
			{
				t = 44;
				putchar(t);
				t = 32;
				putchar(t);
			}
			putchar(m);
			putchar(n);
			n++;
		}
		m++;
	}
	n = '\n';
	putchar(n);

	return (0);
}
