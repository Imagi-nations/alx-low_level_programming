#include "main.h"

/**
*_strcmp - main function
*
* Description: compares two strings
* @s1: string one
* @s2: string two
*
* Return: the following
* if s1 == s2 returns zero
* if s1 < s2 returns negative
* if s1 > s2 returns positive number
*
*/

int _strcmp(char *s1, char *s2)
{
int a = 0, diff = 0;

	while (a)
	{
		if (s1[a] == '\0' && s2[a] == '\0')
			break;
		else if (s1[a] == '\0')
		{
			diff = s2[a];
			break;
		}
		else if (s2[a] == '\0')
		{
			diff = s1[a];
			break;
		}
		else if (s1[a] != s2[a])
		{
			diff = s1[a] - s2[a];
			break;
		}
		else
			a++;
	}
return (diff);
}
