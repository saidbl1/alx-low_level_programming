#include "main.h"


/**
 * _strstr - locates a substring in a string
 * @haystack: pointer to input string
 * @needle: pointer to substring to search for
 *
 * Return: pointer to the beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}

		if (needle[j] == '\0')
			return (&haystack[i]);
	}

	return (NULL);
}
