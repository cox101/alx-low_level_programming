#include  "hash_table.h"

/**
 * key_index - gives the index of a key in the hash table array
 * @key: key string
 * @size: size of the array of the hash table
 * Return: index where the key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	idx = hash_djb2(key);

	return (idx % size);
}
