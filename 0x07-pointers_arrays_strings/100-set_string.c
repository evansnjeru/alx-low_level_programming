#include "main.h"

#include <stdio.h>


/**
 * set_string - sets value of pointer to char
 * @s: pointer
 * @to: pointer
 *
 * Return: char pointer
 */
void set_string(char **s, char *to)
{
	*s = to;
}
