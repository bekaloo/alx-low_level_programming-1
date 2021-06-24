#include "holberton.h"

/**
 * print_alphabet - prints the lowercase alphabet
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;
	
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar(j < i / 2? ' ' : '#');
	}
	_putchar('\n');
}