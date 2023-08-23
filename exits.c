#include "shell.h"

/**
 * _strncpy - this will copy a str
 * @dest: this is where the str will be copied to 
 * @src: this is the source of the str
 * @n: this is the amount of chars that will be copied
 * Print: the linked str
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}
/**
 * _strncat - this will link two str together
 * @dest: this is the destination of the first str
 * @src: this is the source of the second str
 * @n: this is the amount of bytes that will me maximally used
 * Print: the linked str
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	return (s);
}
/**
 * _strchr - This will locate the char in a str
 * @s: This is the string to be parsed
 * @c: This is the char to look for
 * Print: the pointer to the memory area s
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}

