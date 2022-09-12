#include <stdio.h>
/**
 * main - Prints possible combination of two different sigits
 *
 * Return: Always (Success)
 */
int main(void)
{

	int i, j;

	for (i = '0'; i <= '9'; i++)
	{

		for (j = '1'; j <= '9'; j++)
		{

			if (j > i)
			{

				putchar(j_0);
				putchar(i_0);
				if (i != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}




