#include "main.h"

/**
 * rev_string - reverse a string
 * @s: char  array string type
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
}	
