#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98, followed by a new line
 * @n: The starting number
 *
 * Description: function prints all the natural numbers from n to 98,
 * inclusively. greater than 98, it prints the numbers in descending order.
 * If n is less than 98, it prints the numbers in ascending order.
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d\n", i);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d\n", i);
		}
	}
}
