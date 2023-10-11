#include <unistd.h>
#include "main.h"

/**
 * main - entry point
 *
 *
 * Return: 0
 */

int main(void)
{
const char *message = "_putchar\n";
write(STDOUT_FILENO, message, 9);
return (0);
}
