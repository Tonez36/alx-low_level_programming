#include "main.h"
/**
 * main - make alphabet
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char az;
	for (az = 'a'; az <= 'z'; az++)
	{
		_putchar(az);
		_putchar('\n');
	}
}
