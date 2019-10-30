#include "holberton.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
  int a=10;
int* ptr =&a;
printf("%p\n", (void *)ptr);
_printf("%p\n", ptr);
    return (0);
}
