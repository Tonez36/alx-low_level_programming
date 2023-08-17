#include <stdio.h>
#include <unistd.h>
/**
 * main - C program that prints without using printf and puts functions
 *
 * Return: Always 1 (success)
 */
int main(void)
{
	write(2,
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19/n", 61);
	return (1);
}
