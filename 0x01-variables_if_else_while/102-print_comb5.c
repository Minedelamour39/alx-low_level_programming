#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a < 100; a++)
	{
		for (b = 0; b < 100; b++)
		{
			c = a / 10;
			d = a % 10;

			if (b > a)
			{
				c = b / 10;
				d = b % 10;

				putchar((a / 10) + '0');
				putchar((a % 10) + '0');
				putchar(' ');
				putchar((b / 10) + '0');
				putchar((b % 10) + '0');

				if (a < 98 || b < 99)
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
