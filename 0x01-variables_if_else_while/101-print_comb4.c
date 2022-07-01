#include <stdio.h>


/**
 * main - This is the main function
 * Description:  prints sequence of digits then exits
 * Return: 0
 */
int main(void)
{
	int n, m, o = 48, i = 0, j = 0, t;

	while (o <= 57)
	{
		m = 49 + (j++);
		while (m <= 57)
		{
			n = 50 + (i++);
			while (n <= 57)
			{
				if (n != 50 || m != 49 || o != 48)
				{
					t = 44;
					putchar(t);
					t = 32;
					putchar(t);
				}
				putchar(o);
				putchar(m);
				putchar(n);
				n++;
			}
			m++;
		}
		n = 50, i = j;
		o++;
	}
	n = '\n';
	putchar(n);

	return (0);
}
