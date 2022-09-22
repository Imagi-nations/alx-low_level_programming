#include "main.h"

/**
* _strncpy - main function
*
* Description: copies a string including the terminating null byte
* using at most an inputted number of bytes.
* if the length of the src string is less than the maximum byte, the
* remainder of the dest string is filled with null bytes.
* works identical to the stdlib strcpy function
* @src: string
* @dest: string
* @n: parameter for max number of bytes to be copied
*
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];

	for ( ; a < n; a++)
		dest[a] = '\0';

return (dest);
}
