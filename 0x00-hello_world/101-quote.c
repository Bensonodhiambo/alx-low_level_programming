#include <unistd.h>
#include <stdlib.h>
#include<string.h>
/**
 * main - A c program that prints a line to the standard error
 * Return 1(Success)
 */
int main(void)
{	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2,message, strlen(message));
	return (1);
}
