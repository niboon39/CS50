#include "stdio.h"

void set_array(int arr[5]) ; 
void set_int (int x) ; 

int main(void){
    int array[5] = {1,2,3,4,5} ;
    int x = 3 ;
    set_array(array); 
    set_int(x) ; 
    printf("%d %d\n" , array[0] , x);  
}


void set_array(int arr[5])
{
    arr[0] = 38 ; 
}

void set_int(int i)
{
    i = 10 ; 
}