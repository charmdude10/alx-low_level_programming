#include "lists.h"
#include <stdio.h>
/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the listint_t list.
 */
size_t print_listint(const listint_t *h)
{
size_t nodes = 0; /* Number of nodes */
while (h)
{
nodes++; /* Increment node count */
printf("%d\n", h->n); /* Print the value of the current node */
h = h->next; /* Move to the next node */
}
return (nodes); /* Return the total number of nodes */
}
