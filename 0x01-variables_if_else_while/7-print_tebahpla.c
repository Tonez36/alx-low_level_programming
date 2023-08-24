#include <stdio.h>
/**
 * main - prints lowercase alphabets in reverse
 *
 * Return: 0 (success)
 */
int main(void)
{
	char alp;

	alp = 'z';
	while (alp >= 'a')
	{
		putchar (alp);
		alp--;
	}
	putchar ('\n');
	return (0);
}
