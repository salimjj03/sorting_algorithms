#include "sort.h"

/**
 * selection_sort - .....
 * @array: ...
 * @size:...
 * Return: ...
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, index = 0;
	int tmp, tmp2;

	if (size < 1)
		return;
	for (i = 0; i < size - 1; i++)
	{
		index = 0;
		tmp2 = array[i];
		for (j = i; j < size; j++)
		{
			if (tmp2 > array[j])
			{
				tmp2 = array[j];
				index = j;
			}
		}
		if (index != 0)
		{
			tmp = array[i];
			array[i] = array[index];
			array[index] = tmp;
			print_array(array, size);
		}
	}
}
