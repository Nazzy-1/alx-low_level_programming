#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table starting from 0
 * @n: The number to print the times table up to
 */
void print_times_table(int n)
{
if (n < 0 || n > 15)
return;

int i, j;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int product = i * j;

if (j != 0)
printf(", ");

if (product < 10)
printf("  %d", product);
else if (product < 100)
printf(" %d", product);
else
printf("%d", product);
}
printf("\n");
}
}
