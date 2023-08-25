#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints combinations of two two-digit numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int e, j;

	for (e = 0; e < 100; e++)
	{
	for (j = 0; j < 100; j++)
	{
		if (e < j)
		{
			putchar ((e / 10) + 48);
			putchar ((e % 10) + 48);
			putchar (' ');
			putchar ((j / 10) + 48);
			putchar ((j % 10) + 48);
		if (e != 98 || j != 99)
		{
			putchar (',');
			putchar (' ');
		}
		}
	}
	}
	putchar ('\n');
	return (0);
}
