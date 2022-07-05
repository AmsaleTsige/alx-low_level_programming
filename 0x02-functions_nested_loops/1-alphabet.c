#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
* print_alphabet - a function that prints the alphabet, in lowercase
* Description: It prints the alphabet in lowercase fallowed by a new lien
* Return: Always 0 (Succes)
*/
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
}
