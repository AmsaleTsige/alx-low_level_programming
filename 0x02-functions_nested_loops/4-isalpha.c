#include <unistd.h>
#include "main.h"
/**
*_isalpha - Check description
* @c: An input character
* Description: Function that checks for alphabetic character and
* returns 1 if c is a letter otherwise return 0
* Return:  1 or 0 in otherwise.
*/
int _isalpha(int c)
{
char lower, upper;
int letter = 0;
for (lower = 'a'; lower <= 'z'; lower++)
{
for (upper = 'A'; upper <= 'Z'; upper++)
{
if (c == lower || c == upper)
letter = 1;
}
}
return (letter);
}
