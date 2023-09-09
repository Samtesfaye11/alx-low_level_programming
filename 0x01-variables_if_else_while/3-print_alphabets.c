#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: Always 0 (success)
 */
int main(void)
{
char lowercase, uppercase;
/* Print lowercase alphabet */
lowercase = 'a';
uppercase = 'A';
while (lowercase <= 'z' || uppercase <= 'Z')
{
if (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}
if (uppercase <= 'Z')
{
putchar(uppercase);
uppercase++;
}
}
putchar('\n');
return (0);
}
