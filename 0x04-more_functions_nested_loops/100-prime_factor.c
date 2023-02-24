#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int n = 612852475143;
long int largest_prime_factor = 2;

while (n > largest_prime_factor)
{
if (n % largest_prime_factor == 0)
{
n /= largest_prime_factor;
largest_prime_factor = 2;
}
else
{
largest_prime_factor++;
}
}

printf("%ld\n", largest_prime_factor);

return (0);
}
