#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
/* Loop from 0 to 9 */
for (i = 0; i <= 9; i++)
{
/* Convert the number to ASCII by adding '0' */
putchar(i + '0');
}
/* Print a new line */
putchar('\n');
return (0);
}
