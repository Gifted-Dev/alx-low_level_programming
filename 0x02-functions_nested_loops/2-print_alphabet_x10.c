#include "main.h"
/**
 * print_alphabet_x10 - function to print alphabet
 * 10 times
 * Return: Always Success
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char chr;

	while (i < 10)
	{
		chr = 'a';
		while (chr <= 'z')
		{
			_putchar(chr);
			_putchar('\n');
			chr++;
		}

		i++;
	}
}
