#include <stdio.h>
/**
 * main - prints all numbers and alphabets
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c;
	int i;

	c = 'a'; i = 0;
	while (i < 10)
	{
		putchar (i + '0');
		i++;
	}
	while (c < 'g')
	{
		putchar (c);
		c++;
	}
	putchar ('\n');
	return (0);
}
