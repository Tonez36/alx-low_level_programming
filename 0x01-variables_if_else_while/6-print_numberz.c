#include <stdio.h>
/**
 * main - prints singlr numbers from 0 to 9
 *
 * Return: 0 (success)
 */
int main(void)
{
	int c;

	c = 0;
	while (c < 10)
	{
		putchar (c + '0');
		c++;
	}
	putchar ('\n');
	return (0);
}
