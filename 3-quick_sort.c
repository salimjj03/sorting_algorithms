#include "sort.h"

/**
 * partitions - ....
 * @array: ...
 * @size: .....
 * @first: ...
 * @last: ...
 * Return:....
 */

size_t partitions(int *array, size_t size, size_t first, size_t last)
{
	size_t i, j;
	int tmp, pivot;

	i = first;
	pivot = array[last];


	for (j = first; j < last ; j++)
	{
		if (array[i] <= pivot)
			i++;
		if (array[j] <= pivot && i < j)
		{
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			i++;
			print_array(array, size);
		}
	}
	if (i >= j)
		return (i);
	tmp = array[i];
	array[i] = array[last];
	array[last] = tmp;
	print_array(array, size);
	return (i);
}

/**
 * quick_sort_r - ....
 * @array: ...
 * @size: .....
 * @first: ...
 * @last: ...
 * Return:....
 */

void quick_sort_r(int *array, size_t size, size_t first, size_t last)
{
	size_t index;

	if (first < last)
	{
		index =  partitions(array, size, first, last);
		if (index == 0)
			quick_sort_r(array, size, first, index);
		else
			quick_sort_r(array, size, first, index - 1);

		quick_sort_r(array, size, index + 1, last);

	}
}

/**
 * quick_sort - ....
 * @array: ...
 * @size: .....
 * Return:....
 */

void quick_sort(int *array, size_t size)
{
	quick_sort_r(array, size, 0, size - 1);
}
