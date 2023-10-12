#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number getting square rooted
 * Return: square root if has natural one, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	int b;
	int e;
	int m;

	if (b <= e)
	{
		m = (b + e) / 2;

		if ((m * m <= n)
				&& ((m + 1) * (m + 1) > n))
		{
			return (m);
		}
	}
	if (n > m)
		return (-1);
}
