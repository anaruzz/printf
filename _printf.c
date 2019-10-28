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

  int i, j, n;
  va_list obj;
  typeToPrint arr[] = {
    {"c", printChar},
    {"s", printString},
    {"%", printPercent},
    {NULL, NULL},
  };

  if (!format)
  return (-1);

  va_start(obj, format);

  i = 0;
  n = 0;

  while(format && format[i])
  {
    j = 0;
    if (format[i] == '%')
    {
      while(arr[j].types)
      {
        if (*(arr[j].types) == format[i + 1])
        {
          n += arr[j].printType(obj);
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
