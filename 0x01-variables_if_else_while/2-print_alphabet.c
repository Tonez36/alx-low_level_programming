#include <stdio.h>
/**
 * main - prints alphabet in lowercase with putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c;
	c = 'a';

	while (c <= 'z')
	{
		putchar (c);
		c++;
	}
	putchar ('\n');
	return (0);
}
