#include "stdio.h"

int main ()
{
    int var ; 
    int *ptr ; 
    int **pptr ; 

    var = 3600 ; 
    ptr = &var ; 
    pptr = &ptr ; 


    printf("Value of var = %i \n" , var) ;
    printf("Value available at *ptr = %i \n" , *ptr) ; 
    printf("Value available at **ptr = %i \n", **pptr) ; 

    return 0 ; 
}