#include <stdio.h>
/**
 * main - Prints possible combination of two different sigits
 *
 * Description: using the main function
 * this programm prints possible combination of two dgit numbers
 * Return: Always (Success)
 */
int main(void)
{

	int c = 0;
	int f_d;
	int l_d;

	while (c <= 99)
	{
		f_d = (c / 10 + '0');
		l_d = (c % 10 + '0');

		if (f_d < l_d)
		{
			putchar(f_d);
			putchar(l_d);

			if (c != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		c++;
	}
	putchar('\n');
	return (0);
}




