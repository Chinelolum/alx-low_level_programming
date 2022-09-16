#include "main.h"
/**
 * _isdigit - checks if a character uppercase
 * @c: character tested
 * Return: always 1 if it is, 0 if its not
 */
int _isupper(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
