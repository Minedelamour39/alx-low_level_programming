#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0 on success
 */
int main(void)
{
int num = 0;

while (num < 10)
{
putchar(num + '0');
num++;
}

char letter = 'a';

while (letter <= 'f')
{
putchar(letter);
letter++;
}

putchar('\n');

return (0);
}
