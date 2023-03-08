#include "main.h"

/**
 *_strcmp - compares pointers to two strings
 *@s1: A pointer to the first sting to be compared
 *@s2: A pointer to the second  sting to be compared
 *
 *Return: If string 1 isless than string 2 negative diff
 *If stings equal 0
 *If string 2 isless than string 1 positive diff
 *
 */

int _strcmp(char *s1, char *s2)

{

	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
