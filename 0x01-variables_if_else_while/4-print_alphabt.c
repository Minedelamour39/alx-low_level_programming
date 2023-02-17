#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, followed by a new line,
 * and skips the letters 'q' and 'e' using only putchar function.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
}
putchar('\n');
return (0);
}
