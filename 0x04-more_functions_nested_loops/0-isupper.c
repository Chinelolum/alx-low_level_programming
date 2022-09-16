#include "main.h"
/**
 * _isdigit - checks if a character its a digit
 * @c: character tested
 * Return: always 1 if it is, 0 if its not
 */
int _isdigit(int c)
{
	if ((c >= 48) && c <= 57)
	{
		return (1);
	}

	return (0);
}
