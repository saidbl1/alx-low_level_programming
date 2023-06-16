#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: the second string
 * @n: the maximum number of bytes to use from s2
 *
 * Return: a pointer to the newly allocated memory containing the concatenated
 * string, or NULL if malloc fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t s1_len = strlen(s1);
	char *concat = malloc(s1_len + n + 1);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))
		n = strlen(s2);

	if (concat == NULL)
		return (NULL);
	memcpy(concat, s1, s1_len);
	memcpy(concat + s1_len, s2, n);
	concat[s1_len + n] = '\0';
	return (concat);
}
