#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"

/*Printing Strings and characters definition:*/

/**
* printChar - Print a character and increments obj.
* @obj: the list of arguments.
* Return: +1 character.
*/
int printChar(va_list obj)
{
_putchar(va_arg(obj, int));
return (1);
}

/**
* printString - Print a string and increments obj.
* @obj: the list of arguments.
* Return: + number of characters printed.
*/
int printString(va_list obj)
{
char *ch = va_arg(obj, char *);
int i = 0;
char *null = "(null)";
if (ch == NULL)
{
for (i = 0; null[i]; i++)
_putchar(null[i]);
}
else
{
while (ch[i])
{
_putchar(ch[i]);
i++;
}
}
return (i);
}

/*===============================*/

/**
* print_hexa - Print in hexadecimal.
* @n: int to print
* Return: Void
*/
void print_hexa(unsigned int n)
{
unsigned int hex[64];
unsigned char hexc[] = {'A', 'B', 'C', 'D', 'E', 'F'};
unsigned int tenc[] = {10, 11, 12, 13, 14, 15};
int i, j;

if (n < 10)
{
_putchar(n + '0');
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
}
i--;
for (; i >= 0; i--)
_putchar(hex[i] + '0');
}

}

/**
* printString_S - Print a string with %S and increments obj.
* @obj: the list of arguments.
* Return: + number of characters printed.
*/
int printString_S(va_list obj)
{
char *ch = va_arg(obj, char *);
int i = 0, n = 0, c = 0;
char *null = "(null)";
if (ch == NULL)
{
for (i = 0; null[i]; i++)
_putchar(null[i]);
return (i);
}
while (ch[i])
{
if ((ch[i] > 0 && ch[i] < 32) || ch[i] >= 127)
{
_putchar('\\');
_putchar('x');
n = ch[i];
if (n <= 15)
{
_putchar('0');
c += 4;
}
print_hexa(n);
i++;
}
else
{
_putchar(ch[i]);
i++;
c++;
}
}
return (c);
}
