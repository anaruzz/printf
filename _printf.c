#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
/**
* _printf - produce output
* @format: String
* Return: int
*/
int _printf(const char *format, ...)
{
int i = 0, j, n = 0;
va_list obj;
typeToPrint arr[] = {
{"c", printChar},
{"s", printString},
{"%", printPercent},
{NULL, NULL},
};
if (format == NULL)
return (-1);
va_start(obj, format);
while (format && format[i])
{
j = 0;
if (format[i] == '%')
{
while (arr[j].types)
{
if (*(arr[j].types) == format[i + 1])
{
n += arr[j].printType(obj);
break;
}
j++;
}
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
