#include<stdio.h>
/**
 * main - print alphabets but skip q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	}
	ch++;
	putchar('\n');
}
