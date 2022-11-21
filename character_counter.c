#include <stdio.h>

/*
*This program counts character from users
*       using the functions below:
*           a. getchar()
*           b. printf()
*/
void main()
{
    long nc;

    while (getchar() != EOF)
    {
           ++nc;
    }
     printf("%d\n", nc);

}