#include "stdio.h"


int main ()
{
    int nums[] = {2,3,1,4,5,6,7,0} ; 
    int size = sizeof(nums) / sizeof(nums[0]) ; 
    // printf("%i " , sizeof(nums)) ;  

    for (int i = 0 ; i < size -1; i++)
    {   
        int min_index = i ;
        for (int k = i+1 ;k < size ; k++)
        {
            if (nums[k] < nums[min_index])
            {
               min_index = k ; 
            }
        }
        int temp = nums[i] ; 
        nums[i] = nums[min_index]; 
        nums[min_index] = temp ; 
    }
    /*Print array*/
    for (int j = 0 ; j < size ; j ++)
    {
        printf("num : %i \n" , nums[j]) ; 
    }
    

    return 0 ;
}
