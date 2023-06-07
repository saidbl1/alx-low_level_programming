#include "main.h"


/**
 * _strlen_recursion - returns the length of a string using recursion
 * @s: pointer to the input string
 *
 * Return: length of the input string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
