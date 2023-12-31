#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name of input string
 * @f: function that prints name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != 0 && name != 0)
		f(name);
}
