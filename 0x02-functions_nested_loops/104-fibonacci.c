#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
unsigned long f1 = 1, f2 = 2, f3;
int i;

printf("%lu, %lu", f1, f2);
for (i = 3; i <= 98; i++)
{
f3 = f1 + f2;
printf(", %lu", f3);
f1 = f2;
f2 = f3;
}
printf("\n");

return (0);
}
