#include "stdio.h"

const int MAX = 3; 

int main()
{
    int var[] = {99 , 98 , 97}; 
    int *ptr[MAX]; 

    /* assign the address of integer. */
    for (int i = 0 ; i< MAX ; i++)
    {
        ptr[i] = &var[i] ; 
    }

    /* Printing value */
    for (int j = 0 ; j < MAX ; j++)
    {
        printf("Address of var[%i] = %p \n" , j , ptr); 
        printf("Value of var[%i] = %i \n" , j , *ptr[j]) ;

    }

    return 0 ; 
}