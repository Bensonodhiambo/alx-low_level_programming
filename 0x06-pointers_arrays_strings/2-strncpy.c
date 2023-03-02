#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: input value
 *@src: input value
 *@n: input value
 *
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[i] = src[j];
		j++;
	}

	return (dest);
}
