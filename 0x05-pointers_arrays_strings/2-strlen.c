#include "main.h"
/**
*_strlen -> function to get the length of a string
* @s: string pointer to passed to this function
* Return: returns length of the string
 */
int _strlen(char *s)
{
int len;
while(*s != '\0')
{
len += 1;
*s = *s + 1;
}
return (len);
}
