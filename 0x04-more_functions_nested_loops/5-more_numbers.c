#include "main.h"

/**
 * more_numbers - print numbers from 0-14, ten times
 * Return: void
 */
void more_numbers(void)
{
    int i, j;

    for (i = 0; i < 10; i++)  // Corrected the loop starting condition to i = 0
    {
        for (j = 0; j <= 14; j++)
        {
            if (j >= 10)
                _putchar('1');
            _putchar(j % 10 + '0');
        }
        _putchar('\n');  // Moved the newline character here
    }
}

