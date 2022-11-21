#include <stdio.h>
/*
*This program gets input numbers form users and check for below conditions
*      prints number if input is positive
*       Does not print and skips if ninput is odd number
*/
int main()
{
    int num;

    while (1)
    {
            printf("Enter a number: ");
            scanf("%d", &num);

            if (num <= 0)
            {
                printf("Sorry you entered a negativce number. ");
                break;
            }
            if ((num % 2) != 0)
            {
                continue;
            }
            
            printf("\n%d", num);
    }
    
}