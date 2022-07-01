#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * get_sign - gets the sign of an integer
 * @n: Integer
 * Return:String
 */
const char *get_sign(int n)
{
	if (n == 0)
		return ("zero");
	else if (n > 0)
		return ("positive");
	else
		return ("negative");
}


/**
 * main - This is the main function
 * Description:  prints a message then exits
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d is %s\n", n, get_sign(n));

	return (0);
}
