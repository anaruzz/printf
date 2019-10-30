#include "holberton.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int i = _printf("%S\n", "Holberton\nSch\nool");
    printf("%d\n", i);
    i = printf("%S\n", "Holberton\nSch\nool");
    printf("%d\n", i);
    return (0);
}
