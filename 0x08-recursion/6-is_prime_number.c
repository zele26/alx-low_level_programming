#include "main.h"

/**
 * is_prime - searches for if a number is prime
 * @a: the number to check
 * @b: the numbers we'll go through
 * Return: Whether or not the number is a prime number
 */

int is_prime(int a, int b)
{
	if (a <= 1 || a % b == 0)
		return (0);
	else if (a == b)
		return (1);
	else if (a > b)
		is_prime(a, b + 1);

	return (1);
}

/**
 * is_prime_number - tells us if an integer is a prime number or not
 * @n: the number to check
 * Return: 0 if the number is not prime, and 1 if it is
 */

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
