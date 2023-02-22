#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long int i, j, k;
unsigned long int j_prev, k_prev, overflow;

i = 1;
j = 2;
j_prev = 1;
k_prev = 2;
printf("%lu, %lu", i, j);

for (int n = 3; n <= 98; n++)
{
if (k_prev > 0)
overflow = (k / 1000000000) + (j / 1000000000);
else
overflow = 0;

k = (k_prev + j_prev) % 1000000000;
j = (j_prev + k_prev + overflow) % 1000000000;
j_prev = k_prev;
k_prev = k;

printf(", %lu", j);
}

putchar('\n');
return (0);
}
