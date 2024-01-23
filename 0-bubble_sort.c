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
	size_t i, sz = size;
	bool bubbly = false;
	int tmp;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < sz - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				bubbly = false;
			}
		}
		sz--;
	}
}
