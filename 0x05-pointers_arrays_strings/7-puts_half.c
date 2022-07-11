#include "main.h"
#include <string.h>
/**
 * puts_half - print second half of a string
 * @str: char array string typr
 * Description: If odd number of charts, prints (length -1) / 2
 */
void puts_half(char *str);
{
	int i
	for (i = 0; str[i] != '\0'; i++);
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
