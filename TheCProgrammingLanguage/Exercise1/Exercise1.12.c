/*
** Exercise1.12.c
** Ad
** Init: 191003
*/

#include <stdio.h>

#define IN 1
#define OUT 0

/* Prints input 1 word per line. */
main()
{
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (state == IN)
            {
                state = OUT;
                putchar('\n');
            }
        }
        else
        {
            if (state == OUT)
                state = IN;
            putchar(c);
        }
    }
}
