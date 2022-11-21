#include <stdio.h>
#define LOWER 0 /*lower limit of temperature table */
#define UPPER 300 /*UPPER limit of temperature table */
#define STEP 20 /*UPPER limit of temperature table */
/*
* f = 0, 20, ..... 300
*/

void main()
{
    int fahr;
    for (fahr = LOWER; fahr <= UPPER;  fahr = fahr + STEP)
    {
        printf("%4.0f %6.1f\n", fahr,  (5.0/9.0)*(fahr-32.0));
    }
    
}