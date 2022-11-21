#include <stdio.h>

/*
*This program counts lines from users
*       using the functions below:
*           a. getchar()
*           b. putchar()
*/
void main()
{
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++nl;
        }
    }
    printf("%d\n", nl);
}