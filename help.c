#include "sort.h"

/**
 * print_array - function that prints n elements of an array of integers,
 * followed by a new line
 *
 * @array: first input
 * @size: second input
 *
 * Return: Always 0.
*/

void print_array(const int *array, size_t size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
