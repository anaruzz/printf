#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"

/*Printing functions definition:*/

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

/**
* printPercent - Prints a percent sign.
* @obj: the list of arguments.
* Return: +1 character.
*/
int printPercent(__attribute__((unused))va_list obj)
{
_putchar('%');
return (1);
}

/*===============================*/
