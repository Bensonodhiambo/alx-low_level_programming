#include "main.h"
<<<<<<< HEAD
#include <string.h>
/**
 * _memcpy - Fill a block of memory with a specific value
 * @s: Starting address of memory to be filled
 * @b: The desired value
 * @n: Number of bits to be changed
 *
 * Return: Changed array with new value for n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
=======
/**
 * _memset - fills memory with a specific value
 * @s: Starting address of memory to be filled
 * @b: The desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
>>>>>>> 74854a911a337cb1c30f1519fb3848bc1e5a493e
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
