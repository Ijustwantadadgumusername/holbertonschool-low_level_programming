#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function that return the sum of all its parameters
 * @n: number of items
 * Return: returns 0 if n == 0, otherwise returns sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int count;
	int sum;

	sum = 0;
	va_start(ap, n);

	for (count = 0; count < n; count++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
