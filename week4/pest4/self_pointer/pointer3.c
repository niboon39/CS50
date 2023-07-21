#include "stdio.h" 

int main ()
{
    int *ptr = NULL ; 
    printf("Value of ptr  : %i \n" ,  ptr) ; 

    if (ptr)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n"); 
    }
    return 0 ; 
}