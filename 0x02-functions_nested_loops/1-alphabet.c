#include "main.h"
/**
 * main - function to print alphabets
 * in lowercase
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alpha = 'a';

	if (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
