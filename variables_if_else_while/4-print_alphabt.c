#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * @void: Null value
 *
 * Description: Print alabet execpt e q
 * Return: Zero value
 */

int main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low = 'z'; low++)
	{
		if (low != e && low != q)
		putchar(low);
	}
	putchar('\n');
	return (0);
}
