#include <stdio.h>
/**
*main - prints sum of even fibonacci
*suit elements
*fibonacci suit numbers
*Return: return 0
*/
int main(void)
{
unsigned long long n1 = 0, n2 = 1, n3 = 0, sum = 0;
while (n3 <= 354224848179261915075)
{
n3 = n1 + n2;
n1 = n2;
n2 = n3;

if ((n1 % 2) == 0)
sum += n1;

}
printf("%ld", "%c", ',', '\0', sum);
return (0);
}
