#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2,
 *        separated by comma and space
 *
 * Return: Always 0.
 */
int main(void)
{
int count, overflow;
unsigned long fib1 = 1, fib2 = 2, next;

printf("%lu, %lu", fib1, fib2);

for (count = 3; count <= 98; count++)
{
next = fib1 + fib2;
overflow = (next / 1000000000) > 0;

if (overflow)
{
printf("%lu%09lu", (next / 1000000000), (next % 1000000000));
}
else
{
printf("%lu", next);
}

fib1 = fib2;
fib2 = next;

if (count < 98)
printf(", ");
}
printf("\n");

return (0);
}

