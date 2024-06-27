#include "main.h"

/**
 * print_diagonal - prints a diagonal line of '\' characters
 * @n: number of times the character '\' should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
	_putchar('\n');  // Print a newline for non-positive n
	return;  // Return from the function if n is 0 or negative
	}

	for (i = 0; i < n; i++)
	{
	for (j = 0; j < i; j++)
	{
		_putchar(' ');  // Print j spaces before the backslash
	}
	_putchar('\\');  // Print the backslash at the end of the line
	_putchar('\n');  // Move to the next line
	}
}

