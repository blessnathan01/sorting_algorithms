#include "sort.h"

/**
  * bubble_sort - sorts an array of ints in ascending order
  * @array: array to be sorted
  * @size: size of the array
  *
  * Return: nothing.
  */
void bubble_sort(int *array, size_t size)
{
	int tmp;
	unsigned int x, y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				tmp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = tmp;
				print_array((const int *)array, size);
			}
		}
	}
}
