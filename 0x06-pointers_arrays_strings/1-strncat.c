#include "main.h"

/**
* _strncat - main function
*
* Description: concatnates two stringd but also adds inputted number of bytes
* @dest: string
* @src: string
* @n: parameter to compare index to(int)
*
* Return: new concatnated string
*/

char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;
	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

return (dest);
}
