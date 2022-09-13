#include<stdio.h>
/**
 * main - prints combination of numbers separated by
 * commas and space
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');

		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

