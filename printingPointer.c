#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"
/**
* printPointer -  print a pointer.
* @obj: the adress to print
* Return: +number of characters printed.
*/
int printPointer(va_list obj)
{
unsigned long n;
unsigned int padress[64];
unsigned char hexc[] = {'a', 'b', 'c', 'd', 'e', 'f'};
unsigned int tenc[] = {10, 11, 12, 13, 14, 15};
char *null = "(nil)";
int c = 0, i, j;
n = va_arg(obj, long);
if (n == 0)
{
for (i = 0; null[i]; i++)
{
_putchar(null[i]);
c++;
}
}
else
{
_putchar('0');
_putchar('x');
c = 2;
for (i = 0; n != 0; i++)
{
padress[i] = n % 16;
for (j = 0; j < 6; j++)
{
if (padress[i] == tenc[j])
{
padress[i] = hexc[j] - '0';
break;
}
}
n /= 16;
c++;
}
i--;
for (; i >= 0; i--)
_putchar(padress[i] + '0');
}
return (c);
}
