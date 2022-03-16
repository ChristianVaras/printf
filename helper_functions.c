#include "main.h"

/**
* _strlen - returns the length of a string.
* @s: parameter
* Return: Always 0.
**/
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
* rev_string - reverses a string in place
*
* @s: string to reverse
* Return: A pointer to a character
*/
char *rev_string(char *s)
{
	int len;
	int start;
	char aux;
	char *dest;

	for (len = 0; s[len] != '\0'; len++)
	{}

	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);

	_memcpy(dest, s, len);
	/* permutation */
	for (start = 0; start < len; start++, len--)
	{
		aux = dest[len - 1];
		dest[len - 1] = dest[start];
		dest[start] = aux;
	}
	return (dest);
}

/**
* _memcpy - copy memory area
* @dest: Destination for copying
* @src: Source to copy from
* @n: The number of bytes to copy
* Return: The _memcpy() function returns a pointer to dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
