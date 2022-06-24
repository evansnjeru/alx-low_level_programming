#include <stdio.h>

/**
 * main - This is the main function
 * Description:  which prints a message then exits
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %x byte(s)\n", sizeof(char));
	printf("Size of an int: %x byte(s)\n", sizeof(int));
	printf("Size of a long int: %x byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %x byte(s)\n", sizeof(long long int));
	printf("Size of a float: %x byte(s)\n", sizeof(float));

	return (0);
}
