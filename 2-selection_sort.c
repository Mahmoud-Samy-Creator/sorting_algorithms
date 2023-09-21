#include "sort.h"

/**
 * swap - A fucntion to swap numbers values
 * @num1: value of the 1st number
 * @num2: value of the 2nd number
 * Return: void
 */
void swap(int *num1, int *num2)
{
	int temp;

	temp = (*num1);
	(*num1) = (*num2);
	(*num2) = temp;
}

/**
 * selection_sort - A function sorts array of integers in ascending order
 * @array: Array of integers to be sorted
 * @size: size of the array of integers
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, index = 0;
	int current_min;

	if (size < 2)
		return;

	for (i = 0 ; i < size ; i++)
	{
		current_min = array[i];
		index = i;

		for (j = i + 1 ; j < size; j++)
		{
			if (array[j] < current_min)
			{
				current_min = array[j];
				index = j;
			}
		}

		if (index != i)
		{
			swap(&array[i], &array[index]);
			print_array(array, size);
		}
	}
}
