#include <stdio.h>
/*
*This program copies its input to its output one character at a time.
*       using the functions below:
*           a. getchar()
*           b. putchar()
*/

void main()
{
    char c;

    c = getchar();

    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
    

}