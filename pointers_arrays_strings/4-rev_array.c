#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array of integers
 * @a: said array
 * @n: number of elements to swap
 * Return: empty
 */
void reverse_array(int *a, int n)
{
	int *z;
	int b;
	int c;
	int def;

	z = a;

	for (b = 1; b < n; b++)
	{
		z++;
	}

	for (c = 0; c < b / 2; c++)
	{
		def = a[c];
		a[c] = *z;
		*z = def;
		z--;
	}
}
