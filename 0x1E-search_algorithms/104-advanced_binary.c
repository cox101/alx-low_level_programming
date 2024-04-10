#include "search_algos.h"

/**
 * rec_search - searches for a value in an array of
 * integers using the Binary search algorithm
 *
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}



/**
 *advanced_binary -  a function that searches for a
 * value in a sorted array of integers.
 *
 * @array: pointer to the first element in the array
 * @size: Size of the array to search in
 * @value: Element to be searched
 * Return: return index of searched element
 */

int advanced_binary(int *array, size_t size, int value)
	{
		if (array == NULL || size == 0)
			return (-1);

		return (advanced_binary_recursive(array, 0, size - 1, value));
	}
