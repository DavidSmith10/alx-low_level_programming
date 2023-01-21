#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * @array: array of a function
 * @size: size of a function
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
