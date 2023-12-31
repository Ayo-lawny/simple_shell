#include "shell.h"

/**
 * interactive - print ths is true if the shell is in interactive mode
 * @info: sturct address
 *
 * Print: 1 if it is interactive mode, else 0
 */

int interactive(info_t *info)
{
	return(isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - will check if the char is a delimeter
 * @c: this is the char to check
 * @delim: this is the delimeter string
 *  Print: 1 if true and 0 if false
 */

int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to input
 * Print: 1 if c is alphabetic and if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 * _atoi - this changes a string to an integer
 * @s: this is the string to be converted
 * Print: false if no numbers in string, print converted number otherwise
 */

int _atoi(char *s)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0; s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}

