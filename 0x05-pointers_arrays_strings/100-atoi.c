#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: string to convert.
 *
 * Return: integer.
 */
int _atoi(char *s)
{
int i, num, sign;

sign = 1;
num = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-')
sign *= -1;
if (s[i] >= '0' && s[i] <= '9')
{
num *= 10;
num += s[i] - '0';
}
else if (num > 0)
break;
}
num *= sign;

return (num);
}
