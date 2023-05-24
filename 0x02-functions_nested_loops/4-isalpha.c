#include "main.h"

/**
 * _isalpha - checks for alphabet.
 *
 * @c: the given param
 *
 * Return: Always 0 or 1.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
