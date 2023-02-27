#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENGTH 8

/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: 0
 */
int main(void)
{
int i, c;
char password[LENGTH + 1];

srand(time(NULL));

password[LENGTH] = '\0';
for (i = 0; i < LENGTH; i++)
{
c = rand() % (127 - 32) + 32;
password[i] = c;
}

printf("%s\n", password);

return (0);
}
