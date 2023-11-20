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
	size_t l_b, u_b;
	int tmp, pivot;

	l_b = first;
	u_b = last;
	pivot = array[u_b];


	while (l_b < u_b)
	{

		if (pivot >= array[l_b])
			l_b++;
		if (pivot < array[u_b])
			u_b--;
		if (array[l_b] > array[u_b])
		{
			tmp = array[u_b];
			array[u_b] = array[l_b];
			array[l_b] = tmp;
			print_array(array, size);
		}
	}
	return (u_b);
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
