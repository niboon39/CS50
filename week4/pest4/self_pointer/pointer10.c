#include "stdio.h"


/* Passing pointers to function in C */

void getSecond(unsigned long *par) ; 

int main ()
{
    unsigned long sec ; 
    getSecond(&sec) ; 

    /* Print the actual value */
    printf("Number of second : %i\n",sec) ; 

    return 0; 
}

void getSecond(unsigned long * par)
{
    unsigned long input ; 
    printf("Enter number :");
    scanf("%i" , &input) ;
    *par = input ; 
    return ;  
}