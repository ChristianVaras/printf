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
* itoa - convert integer to a base and store in string
* @num: number to be converted
* @base: which base to convert too
* @str: result will be stored
* Return: pointer to str.
**/
char *itoa(unsigned int num, char *str, int base)
{
	unsigned int i;

	if (base == 2)
	{
		for (i = 0; num > 0; i++)
		{
			if (num % 2 == 0)
			{
				str[i] = '0';
			}
			else
			{
				str[i] = '1';
			}
			num = num / 2;
		}
	}
	return (str);
}

/**
* alloc_len - calculate how many digits in resut contain
* @num: number to be converted
* @base: which base to convert too
* Return: number of bytes to allocate.
**/
int alloc_len(int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num = num / base;
	}
	return (i);
}
