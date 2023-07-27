#include <stdio.h>
#include "main.h"

/**
* rev_string - reverse array
* @n: integer params
* Return: 0
*/

void rev_string(char *n)
{
int i = 0;
int j = 0;
char temp;

while (*(n + i) != '\0')
{
i++;
}
i--;

for (j = 0; j < i; j++, i--)
{
temp = *(n + j);
*(n + j) = *(n + i);
*(n + i) = temp;
}
}

/**
* infinite_add - add 2 numbers together
* @n1: text representation of 1st number to add
* @n2: text representation of 2nd number to add
* @r: pointer to buffer
* @size_r: buffer size
* Return: pointer to calling function
*/


char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int carry = 0;
int idx_r = size_r - 1;
int idx_n1 = 0;
int idx_n2 = 0;

while (n1[idx_n1] != '\0')
idx_n1++;
while (n2[idx_n2] != '\0')
idx_n2++;

r[idx_r] = '\0';
idx_r--;

while (idx_n1 > 0 || idx_n2 > 0 || carry)
{
int digit1 = (idx_n1 > 0) ? n1[--idx_n1] - '0' : 0;
int digit2 = (idx_n2 > 0) ? n2[--idx_n2] - '0' : 0;

int sum = digit1 + digit2 + carry;
carry = sum / 10;
r[idx_r--] = (sum % 10) + '0';

if (idx_r < 0 && (idx_n1 > 0 || idx_n2 > 0 || carry))
return (0);
}

return (&r[idx_r + 1]);
}
