#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number
 *
 * Return: Always 0.
 */

void print_binary(unsigned long int n)
int main();
{
	int i, num;

	printf("enter the number:\n");
	scanf("%d", &num);

	for (i = 31; i >= 0; i--)
	printf("%d", (num >> i) & i);
	printf("\n");
	return ;
}
