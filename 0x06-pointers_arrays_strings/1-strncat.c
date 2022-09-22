#include "main.h"

/**
 * _strncat - Concatenate two springs with inputted number of bytes
 * @dest: first string
 * @src: second string
 * @n: integer parameter to compareindex to
 * Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n);
{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);

}

