#include "main.h"

/**
 * _strstr -Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: If the substring is located - a ponter to the beginning
 * If the substring is not located - NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	char *start = NULL;
	int index =0;

	if (*needle == '\0')
		return haystack;

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			start = haystack;

			do {
				if (needle[index + 1] == '\0')
					return start;

				index++;
			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return NULL;
}
