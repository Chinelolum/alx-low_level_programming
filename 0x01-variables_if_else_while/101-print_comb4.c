#include <stdio.h>
/**
 * main - print possible combo of 3
 * Return:returns zero at the end
 */

int main(void)
{
	int i, p, j;

	for (i = 0; i <= 9; i++)
	{
		for (p = 1; p <= 9; p++)
		{
		for (j = 2; j <= 9; j++)
			{
		if (j > p && p > i)
		{

			putchar(i + '0');
			putchar(p + '0');
			putchar(j + '0');
			if (i != 7)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
}

	putchar('\n');
	return (0);

}
