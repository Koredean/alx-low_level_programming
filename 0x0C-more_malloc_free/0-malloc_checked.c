#include "main.h"

/**
 * malloc_checked - alocates memory using malloc
 * @b: memory to allocate
 *
 * Return: pointer to allocated memory or normal process
 * termination if erro
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
