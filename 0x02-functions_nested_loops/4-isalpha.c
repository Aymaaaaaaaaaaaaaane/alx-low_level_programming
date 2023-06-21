#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 *
 * Description: This function checks if the given character 'c' is an alphabetic letter.
 * It returns 1 if 'c' is a letter, and 0 otherwise.
 *
 * Return: 1 if 'c' is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
