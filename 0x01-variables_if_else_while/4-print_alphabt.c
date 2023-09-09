#include <stdio.h>
/**
 * main - Entry point of the program
 * Description: This program prints the alphabet in lowercase, without 'q'&'e'.
 *Return: Always 0 (Success)
 */
int main(void)
{
char letter;
/* Print the alphabet in lowercase */
for (letter = 'a'; letter <= 'z'; letter++)
{
/* Skip printing 'q' and 'e' */
if (letter == 'q' || letter == 'e')
continue;
/* Print the current letter */
putchar(letter);
}
/* Print a new line */
putchar('\n');
return (0);
}
