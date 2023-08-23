#include "shell.h"

/*
 * _eputs - this prints an input sting
 * @str: this is for the string to be printed
 * Print: Nothing
 */
void _eputs(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_eputchar(str[i]);
		i++;
	}
}
/**
 * _eputchar -  this writes the char c to the stderr
 * @c: this is the character to print
 * Print: 1 if it is true
 * if it is error return -1 and errno is set appropriately.
 */
int _eputchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(2, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}
/**
 * _putfd - this writes the char c to the given filedescriptor
 * @c: this the char to print
 * @fd: this is the filedescriptor to write to
 * Print: 1 if it is successful
 * and if not return -1 and errno is set appropriately.
 */
int _putfd(char c, int fd)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(fd, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}
/**
 * _putsfd - this is to print an input string
 * @str: this is the string to be printed
 * @fd: this is the file descriptor to write to
 * Print: the number of characters put
 */
int _putsfd(char *str, int fd)
{
	int i = 0;

	if (!str)
		return (0);
	while (*str)
	{
		i += _putfd(*str++, fd);
	}
	return (i);
}
