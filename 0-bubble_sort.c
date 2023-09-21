#include "sort.h"
#include <stdio.h>

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
 * bubble_sort - A function sorts array of integers in ascending order
 * @array: Array of integers to be sorted
 * @size: size of the integer array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (size < 2 || !array)
		return;

	for (i = 0 ; i < size - 1 ; i++)
	{
		for (j = 0 ; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
