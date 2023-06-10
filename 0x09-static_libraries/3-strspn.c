#include "main.h"


/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: pointer to input string
 * @accept: pointer to string of accepted characters
 *
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int length = 0;
	int found = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (!found)
			break;
		length++;
	}

	return (length);
}
