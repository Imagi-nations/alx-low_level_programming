#include <stdio.h>

/**
* main - fizzbuzz
*
* Description: program that prints numbers
* from 1 to 100
* if a number is a multiple of three,
* it prints Fizz in place of the number
* if a number is a multiple of five,
* it prints Buzz
* if a number is a multiple of both three and five.
* it prints FizzBuzz either number
* Return: 0
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((num % 3 == 0) && (num % 5 != 0))
		{
			printf("Fizz ");
		}
		else if ((num % 5 == 0) && (num % 3 != 0))
		{
			printf("Buzz ");
		}
		else if (num == 1)
		{
			printf("%d", num);
		}else
		{
			printf("%d ", num);
		}
	}
	printf("\n");

	return (0);
}
