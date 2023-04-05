#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * main - Entry Point
 *
 * Parameter: @h
 * Return: Always 0
 */
size_t print_listint(const listint_t *h);
int main ();

	size_t print_listint(const listint_t *h)
	{
		int count = 0;

		if (h == NULL)
			printf("Linked List is empty");



		while (h != NULL)
		{
			printf("%d", h -> n);
			count++;
			h = h -> next;
		}
		return (count);
	}
