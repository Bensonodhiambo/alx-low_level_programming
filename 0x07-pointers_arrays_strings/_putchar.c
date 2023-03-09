<<<<<<< HEAD
#include "main,h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
=======
#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character to stdout
 * @c: The character to print
 * 
 * Return on success 1
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar.c(char c)
{
	return (write(1, &c, 1));
>>>>>>> 556e437e63433e4add0f4e58ecc37199934396c7
