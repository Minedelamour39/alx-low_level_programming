#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
int i = 0, j = 0;
char temp;

while (s[j + 1] != '\0') /* find end of string */
j++;

while (i < j)
{
/* swap characters */
temp = s[i];
s[i] = s[j];
s[j] = temp;

/* move towards middle of string */
i++;
j--;
}
}
