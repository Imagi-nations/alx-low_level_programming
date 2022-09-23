#include "main.h"
/**
* string_toupper - main function
*
* Description: changes all lowercase letters to uppercase
* @str: string to be changed
*
* Return: address to the string
*/

char *string_toupper(char *str)
{
int a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
			str[a] -= 32;
		a++;
	}
	return (str);
}
