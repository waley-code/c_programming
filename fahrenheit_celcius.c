#include <stdio.h>

/*
* f = 0, 20, ..... 300
*/

void main()
{

    int lower, upper, step;
    float fahr, celcius;
    lower = 0; /*lower limit of temperature table*/
    upper = 300; /* upper limit of temperature table*/
    step = 20; /* step size*/
    fahr = lower;

    while (fahr <= upper)
    {
        celcius = (5.0/9.0)*(fahr-32.0);
        printf("%4.0f %6.1f\n", fahr, celcius);
        fahr = fahr + step;
    }
    
}