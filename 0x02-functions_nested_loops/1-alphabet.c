#include "stdio.h"

/**
 * print_alphabet- prints the alphabet in lowercase
 *
 * Return: Always (0) Success
 */

void print_alphabet(void);

void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
		_putchar(n);
	_putchar('\n');
}
