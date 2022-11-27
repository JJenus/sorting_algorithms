#include "sort.h"

/**
 * selection_sort - selsction sor algorithm
 * @array: array to be sorted
 * @size: length of the array
 *
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j;
	int key, temp;

	while (array && i < size)
	{
		j = i;
		key = i;
		while (j < size)
		{
			if (array[key] > array[j])
			{
				key = j;
			}
			j++;
		}

		if (array[key] != array[i])
		{
			temp = array[i];
			array[i] = array[key];
			array[key] = temp;
			print_array(array, size);
		}
		i++;
	}
}
