#include "main.h"

/**
* print_alphabet_x10 - No entry point
*
* Description - Prints the alphabets in lowercase 10x
*
*/

void print_alphabet_x10(void)
{
	int x;
	char y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
