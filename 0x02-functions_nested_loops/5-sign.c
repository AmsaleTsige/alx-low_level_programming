#include <unistd.h>
#include "main.h"
/**
* print_sign - Check Holberton
* @n: An input number
* Description: Function prints the sign of the number
* Return: 1 if number is positive, o if number is 0, or
* -1 if number is negative
*/
int print_sign(int n)
{
int tester;
if (n > 0)
{
tester = 1;
_putchar('+');
}
else if (n == 0)
{
tester = 0;
_putchar('0');
}
else
{
tester = -1;
_putchar('-');
}
return (tester);
}
