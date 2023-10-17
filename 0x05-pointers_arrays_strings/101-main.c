#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 11

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main() {
    srand(time(NULL));

    char password[PASSWORD_LENGTH + 1];
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = generateRandomChar();
    }
    password[PASSWORD_LENGTH] = '\0';

    printf("Generated Password: %s\n", password);

    return 0;
}
