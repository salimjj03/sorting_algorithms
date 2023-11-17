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

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				array[j] ^= array[j + 1];
				array[j + 1] = array[j] ^ array[j + 1];
				array[j] ^= array[j + 1];
				flag++;
				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
	}
}
