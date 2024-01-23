#include "sort.h"

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: Array of integers to be sorted
 * @size: The size of the array to be sorted.
 *
 * Description: Prints the array after each swap of the elements in order.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, sz;
	int tmp;

	if (array == NULL || !size)
		return;

	sz = 0;
	while (sz < size)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
			}
		}
		sz++;
	}
}
