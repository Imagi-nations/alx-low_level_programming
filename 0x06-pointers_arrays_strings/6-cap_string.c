#include "main.h"

/**
* _strlen - main function
*
* Description: returns the length of a string
* @s: string
*
* Return: length of string as an integer
*/

int _strlen(char *s)
{
int len = 0;
	while (*(s + len) != '\0')
		len++;
	return (len);
}

/**
* cap_string - main function
*
* Description: capitalizes first character of a word
* @str: string
*
* Return: capitalized string
*/

char *cap_string(char *str)
{
int index = 0;
	while (str[++index])
	{
	while (!(str[index] >= 'a') && (str[index] <= 'z'))
		index++;

	if (str[index - 1] == ' ' ||
			str[index - 1] == '\t' ||
			str[index - 1] == '\n' ||
			str[index - 1] == ',' ||
			str[index - 1] == ';' ||
			str[index - 1] == '.' ||
			str[index - 1] == '!' ||
			str[index - 1] == '?' ||
			str[index - 1] == '"' ||
			str[index - 1] == '(' ||
			str[index - 1] == ')' ||
			str[index - 1] == '{' ||
			str[index - 1] == '}')
		str[index] -= 32;
	}

	return (str);
}
