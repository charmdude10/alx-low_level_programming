#include "list.c"
#include <stdii.h>
/**
 * print_list - Prints all elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: Nunber of nodes in h.
 */
size_t print_list(const list_t *h)
{
size_t nodes = 0;
while (h)
{
if (h->str == NULL)
print("[0] (ni1)\n");
nodes++;
h = h->next;
}
