#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: A pointer to a pointer to the head of the list.
 *
 * Returns: The size of the list that was freed.
 * The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *current, *temp;
    size_t size = 0;

    if (h == NULL || *h == NULL)
        return (size);

    current = *h;
    while (current != NULL)
    {
        temp = current->next;   /* Store the next node */
        free(current);          /* Free the current node */
        current = temp;         /* Move to the next node */
        size++;
    }

    *h = NULL; /* Set the head to NULL */

    return (size);
}

