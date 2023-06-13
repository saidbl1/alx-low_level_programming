#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * @str: The string to duplicate.
 *
 * Return: On success, returns a pointer to the duplicated string.
 */


char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, length;

	if (str == NULL)
		return (NULL);

	length = 0;
	while (str[length] != '\0')
		length++;

	duplicate = malloc(sizeof(char) * (length + 1));
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		duplicate[i] = str[i];
	duplicate[i] = '\0';

	return (duplicate);
}
