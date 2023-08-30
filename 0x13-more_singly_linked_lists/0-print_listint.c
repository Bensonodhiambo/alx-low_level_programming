#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint - prints all the elements
 *
 * @h: pointer
 * Return: Always 0
 */

	size_t print_listint(const listint_t *h)
	{
		int count = 0;

		if (h == NULL)
			printf("Linked List is empty");



		while (h != NULL)
		{
			printf("%d\n", h->n);
			count++;
			h = h->next;
		}
		return (count);
	}
