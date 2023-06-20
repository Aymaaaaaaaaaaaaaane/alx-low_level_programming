#include "main.h"

/**
 * print_alphabet - Prints all lowercase alphabets from 'a' to 'z'
 *
 * Description: This function prints all the lowercase alphabet characters
 *              from 'a' to 'z', followed by a newline character.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
