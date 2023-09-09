#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;
/* Loop from 'z' to 'a' */
for (letter = 'z'; letter >= 'a'; letter--)
{
/* Print each letter */
putchar(letter);
}
/* Print a new line */
putchar('\n');
return (0);
}
