#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * spec - handle specifiers
 * @j : int
 * @format: format of output
 * @i: index of character in format
 * @obj: object to print
 * Return: int
*/

int spec(int j, const char *format, int i, va_list obj)
{
int n = 0;
typeToPrint arr[] = {{"c", printChar},
{"s", printString}, {"%", printPercent},
{"i", printInteger}, {"d", printInteger}, {"b", printBinary},
{"u", printUnsign}, {"o", printOctal}, {"x", printHexL},
{"X", printHexU}, {"S", printString_S}, {"p", printPointer}, {NULL, NULL},};

while (arr[j].types)
{
if (*(arr[j].types) == format[i + 1])
n += arr[j].printType(obj);
j++;
}
return (n);
}

/**
* _printf - produce output
* @format: String
* Return: int
*/
int _printf(const char *format, ...)
{
int i = 0, j, n = 0, v = 0;
va_list obj;
if (format == NULL)
return (-1);
va_start(obj, format);
while (format && format[i])
{
j = 0;
if (format[i] == '%')
{
n = spec(j, format, i, obj);
if (n > 0)
v = 1;
if (v == 0 && format[i + 1] != '\0')
{
_putchar(format[i]);
_putchar(format[i + 1]);
n += 2;
}
else if (v == 0 && format[i + 1] == '\0')
return (-1);
i++;
}
else
{
_putchar(format[i]);
n++;
}
i++;
}
va_end(obj);
return (n);
}
