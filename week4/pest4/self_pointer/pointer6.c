#include "stdio.h"

const int MAX=3 ; 

int main()
{
    int var[] = {10 , 20 , 100} ; 
    int *ptr ; 
    // Let us have address first element in pointer 
    ptr = &var[0] ; 
    int j = 0 ; 

    while (ptr <= &var[MAX-1])
    {
        /* code */
        printf("Address of var[%i] = %p \n" , j , ptr); 
        printf("Value of var[%i] = %i \n" , j , *ptr) ; 
        j++ ; 
        ptr++ ; 
    }

    return 0 ; 
}