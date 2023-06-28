#include "stdio.h"
#include "cs50.h"

int main (void)
{

    int round = get_int("Number of elements: ");
    int value[round] ;
    for (int i = 0 ; i < round ; i++)
    {
        value[i] = get_int("Element %i: ",i) ;
    }

    /* Search max value */
    int min = 0;
    for (int i = 1 ; i < round ; i++)
    {
        if (value[min] < value[i])
        {
            min = i ;
        }
    }
    printf("The max value is : %i. \n", value[min]) ;
    return 0 ;
}