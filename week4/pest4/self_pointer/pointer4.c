#include "stdio.h"

const int MAX = 3 ;

int main ()
{
    int var[] = {100 , 200 , 300} ; 
    int *value[MAX] ; 
    int ** ptr ; 
    // ptr = var ;  // stroe address 

    for (int j = 0 ; j < MAX ; j++)
    {
        value[j] = &var[j] ; 
    }
    ptr = value ; 
    

    // I will incrementing address and printf the value in address. 
    for ( int i = 0 ; i < MAX ; i++)
    {
        printf("Address of var[%i] = %p \n" , i , ptr); 
        printf("Value of var[%i] = %i \n" , i , **ptr) ; 
        ptr ++ ; // move to the next location 
    }

    return 0 ; 
}

