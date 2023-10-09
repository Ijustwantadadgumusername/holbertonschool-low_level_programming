#include "main.h"
/**
 * reset_to_98 - sets value of whatever it points to to 98
 * @n: integer used
 * Return: return void
 */
void reset_to_98(int *n)
{
	int p = 33;
	int *n = &p;

	*n = 98;

	return (0);

}
