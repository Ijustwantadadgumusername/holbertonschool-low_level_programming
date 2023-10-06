#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - believe it or not this prints to 98
 * @n: integer used
 * Return: returns not a thing
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		printf("%d, ", n++);
		printf("%d\n", n);
	}
}
