#include "main.h"
/**
 * _isalpha - to check if letter is uppercase
 * @c: the character to be checked
 * Return: return 1 if uppercase
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
