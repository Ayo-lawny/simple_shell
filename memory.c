#include "shell.h"

/**
 * bfree - this will free a pointer and null the address
 * @ptr: this is the address of the pointer to be freed
 * Print: if free 1, else 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
