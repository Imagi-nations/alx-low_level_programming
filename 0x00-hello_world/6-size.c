#include <stdio.h>
/**
* main - prints the size of types on the computer
*
* Description: using the main function
* this program prints the size of various types on the computer
* Return: 0
*/
int main(void)
{
	char c;
	int i;
	long li;
	long long lii;
	float f;

	printf("Size of a char: %Id byte(s)\n", sizeof(c));
	printf("Size of an int: %Id byte(s)\n", sizeof(i));
	printf("Size of a long int: %Id byte(s)\n", sizeof(li));
	printf("Size of a long long int: %Id byte(s)\n", sizeof(lii));
	printf("Size of a float: %Id byte(s)\n", sizeof(f));
	return (0);
}
