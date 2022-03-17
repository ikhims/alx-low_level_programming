#include "main.h"

/**
 * print_diagonal - print diagonal line based on input.
 *
 * @n:user input of number of line
 * Return: 0-15 10x and new line after
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
		}
		_putchar('\\');
	}
}
