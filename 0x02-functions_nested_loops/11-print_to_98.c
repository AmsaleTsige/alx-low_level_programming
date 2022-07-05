#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
* print_to_98 - check description
* @n: number input
* Description: It prints whole number starting from n to 98
* and 98 to n in order
* Return: Nothing.
*/
void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
printf("%d", n);
if (n == 98)
continue;
printf(", ");
}
printf("\n");
}
else
{
for (; n >= 98; n--)
{
printf("%d", n);
if (n == 98)
continue;
printf(", ");
}
printf("\n");
}
}
