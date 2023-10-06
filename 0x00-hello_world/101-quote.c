#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 1 error
 */

int main(void)
{
char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
for (int i = 0; message[i] != '\0'; i++)
{
putchar(message[i]);
}
putchar('\n');
return (1);
}
