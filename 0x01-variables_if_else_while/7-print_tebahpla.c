#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry Prints the alphabet at reverse
* Return: Always (Success)
*/
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
