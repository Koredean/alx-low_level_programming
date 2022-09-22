#include <stdio.h>

/**
 * _strcat - Concatenatea string src to the end of string dest
 * @dest: first string
 * @src: second string
 *
 * Return: returns pointer to @dest
 */

char *_strcat(char *dest, char *src);
{

	/*concatenates char *dest and char *src*/
	strcat(dest, src)
		printf("strcat(dest, src): %s/n", dest);

	return (dest);
}
