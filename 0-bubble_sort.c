#include "sort.h"

/**
 * bubble_sort - sorts an array in a bubble form
 * @array: sortable list
 * @size: length of array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t j = 0;
	int swap = 1;
	int temp;
	size_t i = 0;
	
	if (!array)
		return;

	while (i < size && swap)
	{
		j = 0;
		swap = 0;

		while (j < size - i - 1)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				swap = 1;
			}
			j++;
		}
		i++;
	}
}
