#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: pointer to the string to convert
 *
 * Return: the converted integer, or 0 if no valid number is found
 */
int _atoi(char *s)
{
int sign = 1, num = 0, digit;

while (*s)
{
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
{
digit = *s - '0';
num = num * 10 + digit;
}
else if (num > 0)
break;
s++;
}

return (sign *num);
}
