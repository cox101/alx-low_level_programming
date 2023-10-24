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
    size_t count = 0;
    const listint_t *loop_node = NULL;

    while (current != NULL)
    {
        count++;
        printf("[%p] %d\n", (void *)current, current->n);
        current = current->next;
        if (current == loop_node)
        {
            fprintf(stderr, "Linked list loop detected. Exiting.\n");
            exit(98);
        }
        if (count == 1)
            loop_node = head;
    }

    return count;
}

