#include "main.h"

/**
* _isdigit - function
*
* Description - checks if a character is a digit or not
* @c: tested character
* Return: 1 on success, 0 on failure
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
