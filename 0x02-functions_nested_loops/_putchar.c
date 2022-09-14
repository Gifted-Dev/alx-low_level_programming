#include<unistd.h>
/**
 * _putchar - writes the character C to stdout
 * @c: The character to print
 * Return: on Success 1
 * on error, -1 is returned and erno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
