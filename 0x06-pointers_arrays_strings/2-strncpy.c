#include "main.h"

/**
 * _strncat - copies an imputed number of bytes
 * from  string src into dest.
 *@dest: The buffer storing the string copy
 *@src: The source string
 *@n: The max number of bytes to copy from src
 *Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
	src_len++;

	for (index = 0; src[index] && index < n; index++)
	dest[index] = '\0';

	return (dest);
}
