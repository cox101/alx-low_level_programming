#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: Size of the array for the hash table
 * Return: A pointer to the newly created hash table, or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new_table = NULL;
    unsigned long int i;

    if (size == 0)
        return (NULL);

    /* Allocate memory for the hash table structure */
    new_table = malloc(sizeof(hash_table_t));
    if (new_table == NULL)
        return (NULL);

    /* Allocate memory for the array of pointers */
    new_table->array = malloc(sizeof(hash_node_t *) * size);
    if (new_table->array == NULL)
    {
        free(new_table);
        return (NULL);
    }

    new_table->size = size;

    /* Initialize each element of the array to NULL */
    for (i = 0; i < size; i++)
        new_table->array[i] = NULL;

    return (new_table);
}

/* Example hash table structure and node structure */

typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;

