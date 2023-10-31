#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element as an array
 * @array: array targeted
 * @size: size of array
 * @action: function needed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
