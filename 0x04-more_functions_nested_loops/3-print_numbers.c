#include "main.h"
/**
 * print_numbers - print normal numbers
 *
 * Return : empty
 */
void print_number(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
