#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabet
 * 
 * Return: void
 */

void print_alphabet(void)
[
	char c = 'a';
	int i, j;

	for (i=0; i < 10; i++)
{
		for (j = 0; j < 26; j++)
		{
			_putchar(c + j);
		}
		_putchar(10);
	}
}
