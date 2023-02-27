#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to a string
 */
void puts_half(char *str)
{
int len = 0;

while (str[len])
len++;

for (len = (len + 1) / 2; str[len]; len++)
_putchar(str[len]);

_putchar('\n');
}
