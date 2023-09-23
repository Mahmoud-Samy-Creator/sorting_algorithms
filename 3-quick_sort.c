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
 * quick_sort - A wrapper function for quicksort_recuirsion
 * @array: Array of integers to be sorted
 * @size: size of the integer array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2 || !array)
		return;

	quick_sort_recursion(array, 0, size - 1, size);
}

/**
 * quick_sort_recursion - A function sorts array of integers in ascending order
 * @array: Array of integers to be sorted
 * @low: lowe boundary of the array to be sorted
 * @high: upper boundary of the array to be sorted
 * @size: size of the array passed
 * Return: void
 */
void quick_sort_recursion(int *array, int low, int high, size_t size)
{
	/* condition for stop recursion */
	if (low < high)
	{
		/* Get the pivot index for recursive partion of the array*/
		int pivot_index = partition(array, low, high, size);

		/* Recursive calling of quick recursion function*/
		quick_sort_recursion(array, low, pivot_index - 1, size);
		quick_sort_recursion(array, pivot_index + 1, high, size);
	}
}

/**
 * partition -  A function for array partition
 * @array: Array of integers to be sorted
 * @low: lowe boundary of the array to be sorted
 * @high: upper boundary of the array to be sorted
 * @size: size of the array
 * Return: pivot index
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot_value = array[high], i = low, j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot_value)
		{
			if (i < j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}

	if (array[i] > pivot_value)
	{
		swap(&array[i], &array[high]);
		print_array(array, size);
	}
	/* Return pivot index */
	return (i);
}
