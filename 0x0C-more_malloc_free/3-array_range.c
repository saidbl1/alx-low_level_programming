#include "main.h"
#include <string.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: minimum value to include in array
 * @max: maximum value to include in array
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		arr[i] = min + i;

	return (arr);
}
