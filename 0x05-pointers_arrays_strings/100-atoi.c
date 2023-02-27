#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: pointer to a string
 *
 * Return: integer
 */
int _atoi(char *s)
{
int i = 0, sign = 1, res = 0;

while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
else if (s[i] >= '0' && s[i] <= '9')
{
res *= 10;
res += s[i] - '0';
}
else if (res > 0)
break;
i++;
}
return (res * sign);
}
