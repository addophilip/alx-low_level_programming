#include "main.h"
/**
 * _memcpy - filling memory with another buffer
 * @dest: source string
 * @src: filling for string
 * @n: lenght of buffer
 * Return: new string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}	
