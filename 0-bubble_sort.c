#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using the bubble sort algorithm
 *
 * @array: the array of integers
 * @size: size of the array
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t n = size;

	while (n > 1)
	{
		for (size_t i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
		n--;
	}
}
