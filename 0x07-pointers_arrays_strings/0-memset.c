#include "main.h"

/**
 * _memset - fills a memmory block with a constant byte
 * @s: Address to memory block
 * @b: char to be used
 * @n: number of byte to be used
 *
 * Return: pointer to the memory block
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n++
	}
	return (s);
}
