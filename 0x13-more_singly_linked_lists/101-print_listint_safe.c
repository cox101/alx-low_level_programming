#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *current = head;
    size_t node_count = 0;

    while (current)
    {
        printf("%d\n", current->n);
        node_count++;

        if (current - current->next > 0)
        {
            printf("-> [%p] %d\n", (void *)current->next, current->next->n);
            exit(98);
        }

        current = current->next;
    }

    return node_count;
}

