#include "holberton.h"
#include <stdarg.h>
/**
* _printf - produce output
* @format: String
* Return: int
*/
int _printf(const char *format, ...)
{
int i, j, n;
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
i = 0;
n = 0;
while(format && format[i])
{
j = 0;
while(arr[j].types)
{
if (format[i]) == '%')
{
if (arr[j].types == format[i + 1])
{
arr[j].printType(obj);
n++;
j++;
}
i++;
}
}
va_end(obj);
return (n);
}
