#include "main.h"
/**
 * print_square - would you believe me if I said this prints a square
 * @size: take a guess
 * Return: returns 0
 */
void print_square(int size)
{
	int i;
	int d;

	for (i = 0; i < size; i++)
	{
		for (d = 0; d < size; i++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
