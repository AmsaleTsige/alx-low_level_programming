#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* print_rev - a function that prints a string, in reverse,
* followed by a new line.
* @s: an input string
* Return: Nothing
*/
void print_rev(char *s)
{
int len = 0;
while (s[len] != '\0')
len++;
while (len)
putchar(s[--len]);
putchar('\n');
}
