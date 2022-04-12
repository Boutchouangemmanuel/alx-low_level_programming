#include <sdtio.h>
/**
 * main - entry point
 *
 * Description: print the lowest alphabet
 * Return: 0
 */
int main(void)
{
int c;

for (c = 0; c < 26; ++c)
putchar('a' , c);

putchar("\n");

return (0);
}

