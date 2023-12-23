#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array of the hash table
 * Return: Pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
    if (size == 0)
        return NULL;

    hash_table_t *ht = malloc(sizeof(hash_table_t));
    if (!ht)
        return NULL;

    ht->size = size;
    ht->array = calloc(size, sizeof(hash_node_t *));
    if (!ht->array)
    {
        free(ht);
        return NULL;
    }

    return ht;
}
