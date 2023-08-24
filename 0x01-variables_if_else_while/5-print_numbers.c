#include <stdio.h>
/**
 * main - prints all single digit numbers from 0
 *
 * Return: 0 (success)
 */
int main(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	putchar ('\n');
	return (0);
}
