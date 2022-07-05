#include "main.h"

/**
 * jack_bauer - wow
 *
 * Description: i'm jck bwrr
 * Return: None
 */
void jack_bauer(void)
{
	int i, j, k, l, m;

	for (l = 0; l < 3; l++)
	{
		m = (l != 2) ? 10 : 4;

		for (k = 0; k < m; k++)
		{
			for (j = 0; j < 6; j++)
			{
				for (i = 0; i < 10; i++)
				{
					_putchar(l + '0');
					_putchar(k + '0');
					_putchar(':');
					_putchar(j + '0');
					_putchar(i + '0');
					_putchar('\n');
				}
			}
		}
	}
}
