#include "main.h"

/**
* infinite_add - main function
*
* Description: adds two numbers stored in a string to a buffer
* Assumes that the strings are never empty and that numbers
* will always be positive or zero.
* Assumes that there are only digits stored in the number strings.
* if result can be stored in the buffer,
* returns a pointer to the result
* else, returns zero.
* @n1: first number
* @n2: second number
* @r: result stored
* @size_r: size of buffer
*
* Return: pointer to result
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
}

/**
* add_strings - function
*
* Description: adds the numbers stored in two strings.
* @n1: first number
* @n2: second number
* @r: buffer to store the result
* @r_index: current index of the buffer
*
* Return: a pointer to the result if r works else returns zero
*/

char *add_strings(char *n1, char *n2, char *r, int r_index)
{
int num, tens = o;

for (; *n1 && *n2; n1--, n2--, r_index--)
{
	num = (*n1 - '0') + (*n2 - '0');
	num += tens;
	*(r + r_index) = (num % 10) + '0';
	tens = num / 10;
}

for (; *n1; n1--; r_index++)
{
	num = *(n1 - '0') + tens;
	*(r + r_index) = (num % 10) + '0';
	tens = num / 10;
}

for (; *n2; n2--; r_index--)
{
	num = (*n2 - '0') + tens;
	*(r + r_index) = (num % 10) + '0';
	tens = num / 10;
}
}
