#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>

/*===============================*/

/*Dynamic function selection:*/

/**
* struct typeToPrint - the struct.
* @types: the format.
* @printType: the according function.
* Return: void
*/
typedef struct typeToPrint
{
char *types;
int (*printType)(va_list);
} typeToPrint;

/*===============================*/

/*Printing functions:*/
int printChar(va_list);
int printString(va_list);
int printPercent(va_list);
int printInteger(va_list);
int printBinary(va_list obj);
int printUnsign(va_list obj);
int printOctal(va_list obj);
int printHexL(va_list obj);
int printHexU(va_list obj);
int printPointer(va_list obj);

/*===============================*/

/*Main function:*/
int _printf(const char *format, ...);
int _putchar(char c);

#endif
