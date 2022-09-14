#include "main.h"
/**
 * main - function to print alphabets
 * in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';

	if (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	return (0);
}
