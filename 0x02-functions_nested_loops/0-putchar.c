#include <unistd.h>
#include "main.h"
/**
* main - Entry point
* Description: It prints _putchar, followed by a new
* Return: Always 0 (Success)
*/
int main(void)
{
char *sh = "_putchar";
while (*sh)
{
_putchar(*sh);
sh++;
}
_putchar('\n');
return (0);
}
