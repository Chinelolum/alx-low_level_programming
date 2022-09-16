#include "main.h"
/**
 * _isupper - checks if a character uppercase
 * @c: character to be tested
 * Return: if uppercase return 1, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);

}
