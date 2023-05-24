#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @g: the character to be checked
 * Return: 1 if g is a letter, 0 otherwise
 */
int _isalpha(int g)
{
	return ((g >= 'a' && g <= 'z') || (g >= 'A' && g <= 'Z'));
}
