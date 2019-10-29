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


/**
 * printInteger- print a number.
 * @n: the number to print
 * Return: Always 0.
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
  			_putchar((n / div) + '0');
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
 * @n: the number to print
 * Return: Always 0.
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

/**
 * printUnsign - convert and print an unsigned int to binary.
 * @n: the number to print
 * Return: Always 0.
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
       _putchar((n / div) + '0');
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
 * printOctal - convert and print an unsigned int to binary.
 * @n: the number to print
 * Return: Always 0.
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
 * printOctal - convert and print an unsigned int to binary.
 * @n: the number to print
 * Return: Always 0.
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
/*===============================*/

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
* printString - Print a string and increments obj.
* @obj: the list of arguments.
* Return: + number of characters printed.
*/
int printString_S(va_list obj)
{
char *ch = va_arg(obj, char *);
int i = 0, n = 0;
char *null = "(null)";
if (ch == NULL)
{
for (i = 0; null[i]; i++)
_putchar(null[i]);
return (i + 1);
}
while (ch[i])
{
  if ((ch[i] >= 0 && ch[i] < 32) || ch[i] >= 127)
  {
  _putchar('\\');
  _putchar('x');
  n = ch[i];
  if (n <= 15)
  _putchar('0');
  print_hexa(n);
  i++;
  }
  else
  {
    _putchar(ch[i]);
    i++;
  }
}
return (i);
}
