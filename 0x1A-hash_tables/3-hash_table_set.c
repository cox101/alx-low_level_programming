#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add/update the key/value to
 * @key: key (cannot be an empty string)
 * @value: value associated with the key (duplicated, can be an empty string)
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_node, *current;

    if (ht == NULL || key == NULL || strcmp(key, "") == 0)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);

    current = ht->array[index];

    /* Check for collisions and update value if key already exists */
    while (current != NULL)
    {
        if (strcmp(current->key, key) == 0)
        {
            free(current->value);
            current->value = strdup(value);
            if (current->value == NULL)
                return (0);
            return (1);
        }
        current = current->next;
    }

    /* No collision, add new node at the beginning of the list */
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return (0);

    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return (0);
    }

    new_node->value = strdup(value);
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }

    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1);
}

