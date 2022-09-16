#include "main.h"
/**
 * _isupper - checks if a character uppercase
 * @c: character tested
 * Return: always 1 if it is, 0 if its not
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
