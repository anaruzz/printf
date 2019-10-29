#include "holberton.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int a = 10;
    int *p;
    p = &a;

    int b = _printf("%p\n", p);
    _printf("%d\n", b);

    int j = printf("%p\n", p);
    printf("%d\n", j);
    return (0);
}
