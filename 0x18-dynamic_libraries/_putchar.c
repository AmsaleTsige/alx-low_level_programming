#include <unistd.h>
/**
* _putchar - writes the character c to stdout
* @c: The character to print
* Return: On success 1
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
=======
#include "main.h"
/**
 * _putchar - prints out a character to the stdout
 * @c: character to be printed
 * Return: an integer when
 */
int  _putchar(char c)
{
	write(1, &c, 1);

	return (0);
>>>>>>> b369ab2848291afc543968881119d4198d1fe5ee
}
