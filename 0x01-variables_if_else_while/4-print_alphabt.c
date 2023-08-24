#include <stdio.h>
/**
 * main - prints alphabets without q and e
 *
 * Return: 0 (success)
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp != 'q' && alp != 'e')
		{
			putchar (alp);
		}
	}
	putchar ('\n');
	return (0);
}
