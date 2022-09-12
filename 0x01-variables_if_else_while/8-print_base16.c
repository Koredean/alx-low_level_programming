#include <stdio.h>
/**
 * main - Prints number base 16 and lowercase
 *
 * Return: Always (Success)
 */
int main(void)
{

	char c;

	for (c = '0'; c <= '9';)
	{
		putchar(c);
	}

	for (c = 'a'; c <= 'f';)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
