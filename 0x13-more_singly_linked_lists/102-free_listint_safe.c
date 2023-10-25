#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list and sets the head to NULL.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t free_listint_safe(listint_t **h)
{
    size_t count = 0;
    listint_t *current = *h;
    listint_t *temp = NULL;

    if (*h == NULL)
    {
        return 0;
    }

    while (current != NULL)
    {
        count++;
        temp = current;
        current = current->next;

        free(temp);
        
        if (current == *h)
        {
            *h = NULL;
            break;
        }
    }

    return count;
}

