#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"

/**
* printUnsign - convert and print an unsigned int to binary.
* @obj: the number to print
* Return: +number of characters printed
*/
int printUnsign(va_list obj)
{
int div = 1, x = 0;
unsigned int n = va_arg(obj, unsigned int);
int a = n % 10;

n = n / 10;

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
* printOctal - convert and print an unsigned int to octal.
* @obj: the number to print
* Return: +number of characters printed.
*/
int printOctal(va_list obj)
{
unsigned int n;
unsigned int oct[64];
int c = 0, i;
n = va_arg(obj, int);
if (n < 9)
{
_putchar(n + '0');
c++;
}
else
{
for (i = 0; n != 0; i++)
{
oct[i] = n % 8;
n /= 8;
c++;
}
i--;
for (; i >= 0; i--)
_putchar(oct[i] + '0');
}
return (c);
}
/*===============================*/

/**
* printHexL - convert and print an unsigned int to hexadecimal in lowercase.
* @obj: the number to print
* Return: +number of characters printed.
*/
int printHexL(va_list obj)
{
unsigned int n;
unsigned int hex[64];
unsigned char hexc[] = {'a', 'b', 'c', 'd', 'e', 'f'};
unsigned int tenc[] = {10, 11, 12, 13, 14, 15};
int c = 0, i, j;
n = va_arg(obj, int);
if (n < 10)
{
_putchar(n + '0');
c++;
}
else
{
for (i = 0; n != 0; i++)
{
hex[i] = n % 16;
for (j = 0; j < 6; j++)
{
if (hex[i] == tenc[j])
{
hex[i] = hexc[j] - '0';
break;
}
}
n /= 16;
c++;
}
i--;
for (; i >= 0; i--)
_putchar(hex[i] + '0');
}
return (c);
}

/*===============================*/

/**
* printHexU - convert and print an unsigned int to hexadecimal in uppercase.
* @obj: the number to print
* Return: +number of characters printed.
*/
int printHexU(va_list obj)
{
unsigned int n;
unsigned int hex[64];
unsigned char hexc[] = {'A', 'B', 'C', 'D', 'E', 'F'};
unsigned int tenc[] = {10, 11, 12, 13, 14, 15};
int c = 0, i, j;
n = va_arg(obj, int);
if (n < 10)
{
_putchar(n + '0');
c++;
}
else
{
for (i = 0; n != 0; i++)
{
hex[i] = n % 16;
for (j = 0; j < 6; j++)
{
if (hex[i] == tenc[j])
{
hex[i] = hexc[j] - '0';
break;
}
}
n /= 16;
c++;
}
i--;
for (; i >= 0; i--)
_putchar(hex[i] + '0');
}
return (c);
}
