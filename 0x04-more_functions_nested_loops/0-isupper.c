#include "main.h"
#include <stdio.h>
/**
* _isupper - checks a character whether uppercase or not
* @c: member
* Return: 1 (on success) otherwise 0
*/
int _isupper(int c)
{
return ((c >= 65 && c <= 90) ? 1 : 0);
}
