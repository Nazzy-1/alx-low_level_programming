#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
unsigned long fib1 = 1, fib2 = 2, fib_next, sum = 2;

while (fib_next <= 4000000)
{
fib_next = fib1 + fib2;

if (fib_next % 2 == 0)
sum += fib_next;

fib1 = fib2;
fib2 = fib_next;
}

printf("%lu\n", sum);

return (0);
}
