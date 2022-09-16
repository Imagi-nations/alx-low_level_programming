#include "main.h"

/**
* _isupper - function
*
* Description: checks if a  character is uppercase or not
* @c: character to be tested
* Return: 1 on success, 0 on failure
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
