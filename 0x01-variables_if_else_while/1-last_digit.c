#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * get_statement - gets the sign of an integer
 * @n: Integer
 * Return: String
 */
const char *get_statement(int n)
{
	if (n == 0)
		return ("0");
	else if (n > 5)
		return ("greater than 5");
	else
		return ("less than 6 and not 0");
}


/**
 * main - This is the main function
 * Description:  prints a message then exits
 * Return: 0
 */
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	printf("Last digit of %d is %d and is %s\n", n, m, get_statement(m));

	return (0);
}
