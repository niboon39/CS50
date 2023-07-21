#include "stdio.h"
#include "time.h"

/* function to generate and return random numbers */
int *getRandom()
{
    static int r[5] ; //  0-99
    
    /* set the seed */
    srand( (unsigned)time(NULL) );

    for (int i = 0 ; i < 5 ; i++)
    {
        r[i] = rand() ; 
        printf("%i\n", r[i]) ; 
    } 
    return r ; 
}

int main ()
{
    /* Pointer to int  */
    int *p ; 
    p = getRandom() ; 

    for (int i = 0 ; i < 5 ; i++)
    {
        printf("*(p + [%i]) : %i \n" , i , p[i]);
    }
    return 0 ; 
}