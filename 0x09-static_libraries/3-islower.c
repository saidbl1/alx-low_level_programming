#include "main.h"

/**
 * _islower - check for lowercase.
 *
 * @c: given value
 *
 * Return: Always 1 for lowercase
 * 0 for uppers
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
