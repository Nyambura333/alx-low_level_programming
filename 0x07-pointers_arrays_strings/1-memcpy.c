#include "main.h"

/**
 * _memcpy - function @n bytes from memory area @src to memory area @dest
 *
 * @n: Number of bytes to copy
 * @src: Source memory area
 * @dest: Destination memory area
 *
 * Return: A pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[1] = src[1];
	}
	return (dest);
}
