#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: integer number
 */
void print_times_table(int n)
{
	int i, j, res;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				res = i * j;
				if (j == 0)
					_putchar('0' + res);
				else
				{
					_putchar(',');
					_putchar(' ');
					if (res < 10)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + res);
					}
					else if (res < 100)
					{
						_putchar(' ');
						_putchar('0' + res / 10);
						_putchar('0' + res % 10);
					}
					else
					{
						_putchar('0' + res / 100);
						_putchar('0' + (res / 10) % 10);
						_putchar('0' + res % 10);
					}
				}
			}
			_putchar('\n');
		}
	}
}

