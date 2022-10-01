#include <stdio.h>

/**
 * main - prints the name of programm
 * @argc: numbers of arguments passed to function
 * @argv: argument vector of pointers to strings
 *
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
