#include "main.h"
/**
 * _strcat - concat 2 strings
 * @dest: returned string
 * @src: the source string
 * Return: @dest
 */

char *_strcat(char *dest, char *src)
{
	int destLength = 0;
	int srcLength = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destLength++;
	for (i = 0; src[i] != '\0'; i++)
		srcLength++;
	for (i = 0; i <= srcLength; i++)
		dest[destLength + i] = src[i];
	return (dest);
}
