#include "main.h"
#include <stdio.h>

/**
 * _strncat - adding two strings
 * @dest: return a point to the resulting string
 * @src: variables
 * @n: another variable
 * Return: a character
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;


	while (dest[a] != '\0')
		a++;

	while (src[b] != n)
	{
		dest[a] = src[b];
		if (src[b] == '\0')
		{
			break;
		}
		b++;
		a++;
	}
	return (dest);
}
