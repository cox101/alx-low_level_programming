#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list and counts nodes safely.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t count = 0;
    const listint_t *current = head;
    const listint_t *loop = NULL;

    while (current)
    {
        printf("[%p] %d\n", (void *)current, current->n);
        count++;

        /* Check for a loop by comparing addresses */
        if (current <= loop)
        {
            printf("-> [%p] %d\n", (void *)current->next, current->next->n);
            break;
        }

        current = current->next;
        loop = (loop == NULL) ? head : loop;
    }

    return count;
}

