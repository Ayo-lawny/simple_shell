#include "shell.h"

/**
 * _memset - this fills the memory with a constant byte
 * @s: this is the pointer of the memory area
 * @b: this is the byte to fill *s with
 * @n: this is the number of bytes to be filled
 * Print: the pointer to the memory area s as (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * ffree - frees a string of strings
 * @pp: string of strings
 */
void ffree(char **pp)
{
	char **a = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}
/**
 * _realloc - this will reallocate a block of memory
 * @ptr: this is the pointer to thee previous allocated block
 * @old_size: this is the byte size of the previous block
 * @new_size: this is the byte size of the new block
 * Print: the pointer to the old block nameen.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
}
