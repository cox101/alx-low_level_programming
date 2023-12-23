#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the array of the hash table
 * Return: Pointer to the newly created sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *sht;

    if (size == 0)
        return (NULL);

    sht = malloc(sizeof(shash_table_t));
    if (sht == NULL)
        return (NULL);

    sht->size = size;
    sht->array = calloc((size_t)size, sizeof(shash_node_t *));
    if (sht->array == NULL)
    {
        free(sht);
        return (NULL);
    }

    sht->shead = NULL;
    sht->stail = NULL;

    return (sht);
}

/**
 * shash_table_set - adds an element to the sorted hash table
 * @ht: sorted hash table to add/update the key/value to
 * @key: key (cannot be an empty string)
 * @value: value associated with the key (duplicated, can be an empty string)
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    shash_node_t *new_node, *current;

    if (ht == NULL || key == NULL || strcmp(key, "") == 0)
        return (0);

    current = ht->shead;

    /* Check if key already exists and update the value */
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
        current = current->snext;
    }

    /* Key doesn't exist, create a new node */
    new_node = malloc(sizeof(shash_node_t));
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

    shash_table_sorted_insert(ht, new_node);
    return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key from the sorted hash table
 * @ht: sorted hash table to look into
 * @key: key to search for
 * Return: value associated with the key, or NULL if key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    shash_node_t *current;

    if (ht == NULL || key == NULL || strcmp(key, "") == 0)
        return (NULL);

    current = ht->shead;

    while (current != NULL)
    {
        if (strcmp(current->key, key) == 0)
            return (current->value);
        current = current->snext;
    }

    return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: sorted hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *current;

    if (ht == NULL)
        return;

    printf("{");
    current = ht->shead;
    while (current != NULL)
    {
        printf("'%s': '%s'", current->key, current->value);
        if (current->snext != NULL)
            printf(", ");
        current = current->snext;
    }
    printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse order
 * @ht: sorted hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *current;

    if (ht == NULL)
        return;

    printf("{");
    current = ht->stail;
    while (current != NULL)
    {
        printf("'%s': '%s'", current->key, current->value);
        if (current->sprev != NULL)
            printf(", ");
        current = current->sprev;
    }
    printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: sorted hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
    shash_node_t *node, *next;

    if (ht == NULL)
        return;

    node = ht->shead;
    while (node != NULL)
    {
        next = node->snext;
        free(node->key);
        free(node

