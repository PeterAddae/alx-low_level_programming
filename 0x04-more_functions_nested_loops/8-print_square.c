#include <stdio.h>
#include "main.h"

/**
 * print_square - print sqaures
 * @size: parameter
 * Return: return nothing
 */
void print_sqaure(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, j;

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
