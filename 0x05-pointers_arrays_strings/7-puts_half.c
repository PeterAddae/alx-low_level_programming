#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: input
 * Return: half the input
 */
void puts_half(char *str)
{
int j = 0;
int k;

while (str[j] != '\0')
{
j++;
}
if (j % 2 == 1)
{
k = (j - 1) / 2;
k += 1;
}
else
{
k = j / 2;
}
for (; k < j; k++)
{
<<<<<<< HEAD
;}}
=======
_putchar(str[k]); }}
>>>>>>> 945a39117c639d5c7654bac8ed9cdb29373f406c
