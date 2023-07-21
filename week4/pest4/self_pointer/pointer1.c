#include "stdio.h"

int main (int argc , char * argv[])
{
    int var1 ; 
    char var2[10] ; 
    printf("Address of var1 variable: %p \n" , &var1) ; 
    printf("Address of var2 variable: %p \n" , &var2 ); 
    /* %p and %x are the same but %p will show full address. */
    return 0 ; 
}