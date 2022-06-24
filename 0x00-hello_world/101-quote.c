#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - This is the main function
 * Description:  which prints a message then exits
 * Return: 1
 */
int main(void)
{
	int fd = 2;
	char buf[60];

	strcpy(buf, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	write(fd, buf, sizeof(buf) - 1);

	return (1);
}
