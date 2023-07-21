#include "stdio.h"

const int MIN = 3 ; 

int main ()
{
    int var[] = {10 , 20 , 30} ; 
    int *value[MIN] ; 
    int **ptr ; 

    // Add var to *value 
    for (int i = 0 ; i < MIN ; i++)
    {
        value[i] = &var[i] ; 
    }
    ptr = &value[MIN-1] ;   

    for (int j = MIN ; j > 0 ; j--)
    {
        printf("Address of var[%i] = %p \n" , j , ptr); 
        printf("Value of var[%i] = %i \n" , j , **ptr) ; 
        ptr -- ; 
    }
    return 0 ; 
}