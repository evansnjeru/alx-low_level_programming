#include <stdio.h>


/**
 * isPrime - prints 0 if number is prime
 * @n: number to check
 * Return: 1 or 0
 */
int isPrime(long n)
{
	int i;

	if (n < 2)
		return (0);
	else if (n == 2)
		return (1);

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return (0);
	}

	return (1);
}


/**
 * largestFactor - returns largest prime factor of a number
 * @n: number
 * Return: long integer
 */
long largestFactor(long n)
{
	long i, x;

	x = n;

	for (i = 2; i <= x; i++)
	{
		if (isPrime(x) == 1)
			break;

		if ((x % i == 0) && (isPrime(i) == 1))
			x = x / i;

	}
	return (x);
}


/**
 * main - solves prime factor of a number
 *
 * Return: Always 0.
 */
int main(void)
{
	long n = 612852475143;

	if (isPrime(n))
		printf("%ld\n", n);
	else
		printf("%ld\n", largestFactor(n));

	return (0);
}
