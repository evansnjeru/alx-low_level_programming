#include "main.h"


/**
 * swap_int - swap values of two pointers
 * @a: pointer 1
 * @b: pointer 2
 *
 * Return: None
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
