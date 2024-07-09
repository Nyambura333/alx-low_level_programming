#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the characters to match
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int accept_len = 0;
	int i = 0;

	while (accept[accept_len])
	{
		accept_len++;
	}

	while (*s)
	{
		for (i = 0; i < accept_len; i++)
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
		}
		if (i == accept_len)
		{
			break;
		}
		s++;
	}

	return (count);
}

