#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key to search for
 * Return: value associated with the key, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;
    hash_node_t *current;

    if (ht == NULL || key == NULL || strcmp(key, "") == 0)
        return (NULL);

    index = key_index((const unsigned char *)key, ht->size);

    current = ht->array[index];

    /* Traverse the linked list at the calculated index */
    while (current != NULL)
    {
        if (strcmp(current->key, key) == 0)
            return (current->value); /* Key found, return the associated value */
        current = current->next;
    }

    return (NULL); /* Key not found */
}
