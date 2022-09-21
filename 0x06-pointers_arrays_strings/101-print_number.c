#include "main.h"
#include <stdio.h>

/**
  * print_number - Prints any integer with putchar
  * @n: Number to prints
  * Return: Nothing
  */
void print_number(int n)
{
unsigned int num = n;

if (n < 0)
{
_putchar('-');
num = -num;
}

if ((num / 10) > 0)
print_number(num / 10);

<<<<<<< HEAD
_putchar(num % 10 + '0');
}
=======
_putchar(x % 10 + '0'); }
>>>>>>> 8849f04c4fc4b58c39b76031b351482704c204fc
