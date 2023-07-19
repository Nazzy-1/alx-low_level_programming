#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
int n;
unsigned long fib1 = 1, fib2 = 2, fib_next;

printf("%lu, %lu", fib1, fib2);

for (n = 3; n <= 50; n++)
{
fib_next = fib1 + fib2;
printf(", %lu", fib_next);

fib1 = fib2;
fib2 = fib_next;
}

printf("\n");

return (0);
}
