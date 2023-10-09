#include "main.h"
/**
 * swap_int - swap values of two integers
 * @a: one of said integers
 * @b: - other said integer
 * Return: return void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
