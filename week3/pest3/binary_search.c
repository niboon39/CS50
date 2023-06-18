#include "stdio.h"
#include "stdbool.h"

/* Define constant */
const int size = 10 ;

bool binary_search(int arr[size] , int target);

int main(void){

    int array[size] = {1,2,3,4,5,6,7,9,10} ;

    bool result =  binary_search(array , 3) ;
    if(result){
        printf("Found\n") ;
    }else{
        printf("Not found\n");
    }

    return 0 ;
}


bool binary_search(int arr[size] , int target){
    int lowerBound = 0 , upperBound = size-1;
    // f(x) : sorted array  

    while(target){
        if (upperBound < lowerBound){
            return 0 ;
        }
        /* Start search at midPoint */
        int mid = lowerBound + (upperBound - lowerBound) /2 ;
        // printf("lower : %i , upper : %i , mid : %i \n", lowerBound , upperBound , lowerBound + ((upperBound - lowerBound) /2)  );
        if (target == arr[mid]){
            return 1 ;
        }
        if (target > arr[mid]){
            lowerBound = mid + 1 ;
        }
        if (target < arr[mid]){
            upperBound = mid -1 ;
        }
    }
    return 0;
}

