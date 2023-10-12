#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number getting square rooted
 * Return: square root if has natural one, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(0, n));
}
/**
 * _sqrt - returns the square root of a number
 * @n: test number
 * @x: squared number
 * Return: returns the suare root of n
 */
int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
