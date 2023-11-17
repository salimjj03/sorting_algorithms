#include "sort.h"

/**
 * bubble_sort - ....
 * @array: ....
 * @size:...
 * Return: ....
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, flag = 0;
	int tmp;

	if (size < 1)
		return;
	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				flag++;
				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
	}
}
