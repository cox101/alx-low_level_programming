#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using linear search
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: If value is found, return the index where it occurs.
 *         If value is not found, return -1.
 */
int linear_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    for (size_t i = 0; i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return i;
    }

    return -1;
}
