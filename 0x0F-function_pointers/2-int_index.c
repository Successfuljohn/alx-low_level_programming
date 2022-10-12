#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @size: number of elem2nts of the array
 * @arry: inout integer array
 * @cmp: pointer to the function to be used
 * to compare values
 * Return: index for the first elemwnt for which the cmp
 * function does not return 0. if elemwnt no element matches,
 * return -1. if size <= 0, return -1.
 **/
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
