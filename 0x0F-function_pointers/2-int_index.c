#include "function_pointers.h"

/**
 * int_index - is a function that searches for an integer
 * @array: is an array input
 * @size: is the size of the array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: index for cmp not 0, -1 for no matches or if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;
	int isfound;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (index = 0; index < size; index++)
		{
			isfound = cmp(array[index]);

			if (isfound)
				return (index);
		}
	}
	return (-1);
}
