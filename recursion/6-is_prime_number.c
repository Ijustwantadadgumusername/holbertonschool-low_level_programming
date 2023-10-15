#include "main.h"
/**
 * is_prime_number - determines if an integer is a prime number or not
 * @n: integer being determined
 * Return: returns 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (isprime(n, n - 1));
}
/**
 * isprime - uses recursion to determine if prime or not
 * @n: number evaluated
 * @i: iterator
 * Return: 1 if prime, 0 if not
 */
int isprime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (isprime(n, i - 1));
}
