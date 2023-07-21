#include "stdio.h"


/* function declaration */

double getAverage(int *arr , int size) ; 
const int size = 5 ; 

int main()
{
    
    int array[] = {1000 , 2 , 3 , 17 , 50} ; 

    double avg = getAverage( array , size) ; 

    printf("Average : %f \n" , avg) ; 
    return 0 ; 
}


double getAverage(int * arr , int size)
{
    double buff =0 ; 
    for (int i = 0 ; i < size ; i++)
    {
        buff += arr[i] ; 
    }
    return buff / (double) size ; 
}