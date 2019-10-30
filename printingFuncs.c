#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"


/**
* printInteger- print a number.
* @obj: the number to print
* Return: +number of characters printed
*/
int printInteger(va_list obj)
{
int div = 1, x = 0;
int n = va_arg(obj, int);
int a = n % 10;

n = n / 10;

if (a < 0 || n < 0)
{
n *= -1;
a *= -1;
_putchar('-');
x++;
}
if (n == 0)
{
x++;
_putchar(a + '0');
}
else
{
while (n / div >= 10)
{
div *= 10;
}
for (; div >= 1; div /= 10)
{
_putchar((n / div) +'0');
x++;
n = n % div;
}
_putchar(a + '0');
x++;
}
return (x);
}
/*===============================*/

/**
* printBinary - convert and print an unsigned int to binary.
* @obj: the number to print
* Return: +number of characters printed
*/
int printBinary(va_list obj)
{
unsigned int n;
unsigned int bin[64];
int c = 0, i;
n = va_arg(obj, int);
if (n < 2)
{
_putchar(n + '0');
c++;
}
else
{
for (i = 0; n != 0; i++)
{
bin[i] = n % 2;
n /= 2;
c++;
}
i--;
for (; i >= 0; i--)
_putchar(bin[i] + '0');
}
return (c);
}
/*===============================*/
