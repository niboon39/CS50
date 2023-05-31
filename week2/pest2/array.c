#include "stdio.h"
#include "cs50.h"
#include "string.h"

int main (void)
{
    int num; 
    do{
    printf("Enter size of array : ") ; 
    scanf("%i" , &num) ; 
    } while (num < 1); 
    
    int arr_in[num] ;
    arr_in[0] = 1 ; 
    printf("Enter value of array : ");
    for(int i = 1 ; i < num ; i++)
    {
        // 1 , 2 , 4 , 8 , 32 , 64 
        arr_in[i] = 2* arr_in[i-1] ; 
    }
    /* print array */
    printf("array : ");
    for(int i = 0 ; i < num ; i++)
    {
        printf("%i " , arr_in[i]) ; 
    }

}