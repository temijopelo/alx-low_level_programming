#include <unistd.h>
#include "main.h"

/**
 * main - entry point
 *
 *
 * Return: 0
 */

int main()
{
const char *message = "_putchar\n";
write(STDOUT_FILENO, message, 10);
return (0);
}
