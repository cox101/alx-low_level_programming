#include <stdlib.h>
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
    const listint_t *loop_start = NULL;

    while (current)
    {
        if (!loop_start)
        {
            printf("%d\n", current->n);
            count++;
        }
        if (current->next >= current)
        {
            if (!loop_start)
                loop_start = current->next;
            else if (loop_start >= current->next)
            {
                printf("-> [%p] %d\n", (void *)current, current->n);
                break;
            }
        }
        current = current->next;
    }

    if (loop_start >= current)
    {
        printf("-> [%p] %d\n", (void *)current, current->n);
        return (count);
    }

    if (loop_start)
        printf("-> [%p] %d\n", (void *)current, current->n);

    return (count);
}

