#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: given number
 * Return: returns the factorial
 */
int factorial(int n)
{
	int a;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	a = factorial(n - 1);
	return (n * a);
}
