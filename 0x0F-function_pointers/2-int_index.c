#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: array of integers to be searched.
 * @size: size of the array.
 * @cmp: pointer to the function thar searches
 * Return: -1 if size is 0, otherwise returns i
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
