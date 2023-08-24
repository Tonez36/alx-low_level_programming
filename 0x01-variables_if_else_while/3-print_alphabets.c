#include <stdio.h>
/**
 * main - prints alphabets in lowercase and then in uppercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char l;
	char u;

	l = 'a';
	u = 'A';
	while (l <= 'z')
	{
		putchar (l);
		l++;
	}
	while (u <= 'Z')
	{
		putchar (u);
		u++;
	}

	putchar ('\n');
	return (0);
}
