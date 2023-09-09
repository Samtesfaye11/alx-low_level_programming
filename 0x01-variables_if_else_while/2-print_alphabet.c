#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: Always 0 (success)
 */
int main(void)
{
    char c;
 /* Initialize character variable c with 'a' */
    c = 'a';
    /* Print the lowercase alphabets using a while loop */
    while (c <= 'z') {
        putchar(c);
        c++;
    }

    /* Print a newline character */
    putchar('\n');
return (0);
}
