#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: the array
 * @n: the number of elements
 * Return: return void
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);

		if (x != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
