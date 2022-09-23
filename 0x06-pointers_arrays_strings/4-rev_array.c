#include "main.h"

/**
* reverse_array - main function
*
* Description: reverses the content of an array
* @i: array
* @n: number of elements
*
* Return: void
*/

void reverse_array(int *i, int n)
{
int tmp, index;
for (index = n - 1; index > n / 2; index--)
{
tmp = i[n - 1 - index];
i[n - 1 - index] = i[index];
i[index] = tmp;
}
}
