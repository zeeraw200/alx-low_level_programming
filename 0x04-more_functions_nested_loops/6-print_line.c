#include "main.h"

/**
 * print_line - draws a atraight line using a character __.
 * @n: The number of _  characters to be printed out.
 */

void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line <= n; line++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
