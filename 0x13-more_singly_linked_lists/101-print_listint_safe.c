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
    const listint_t *slow = head;
    const listint_t *fast = head;

    if (head == NULL)
    {
        exit(98);
    }

    while (fast != NULL && fast->next != NULL)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        count++;
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            printf("-> [%p] %d\n", (void *)slow, slow->n);
            break;
        }
    }

    return count;
}
}
