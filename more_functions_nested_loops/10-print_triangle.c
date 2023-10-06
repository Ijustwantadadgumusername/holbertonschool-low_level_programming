#include "main.h"
/**
 * print_triangle - prints a dadgum triangle
 * @size: size of dadgum triangle
 * Return: returns nothing
 */
void print_triangle(int size)
{
	int r;
	int s;
	int p;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1; r <= size; r++)
		{
			for (s = size - r; s >= 1; s--)
			{
				_putchar(' ');
			}
			for (p = 1; p <= r; p++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
