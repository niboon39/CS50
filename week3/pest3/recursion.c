#include "stdio.h"

void draw(int n ) ; 

int main(void)
{
    draw(4) ; 
    return 0 ; 
}

void draw(int n )
{
    if ( n <= 0){
        return ; 
    }

    draw (n-1) ;  // stack n in memory 

    for (int i = 0 ; i < n ; i++){
        printf("#");
    }
    printf("\n"); 
    
    
}