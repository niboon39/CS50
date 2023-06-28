#include "stdio.h"

void draw(int n ) ; 
int factorial(int n) ; 
int collatz(int n ) ; 

int main(void)
{
    // draw(4) ; 
    printf("%i \n" , collatz(4)) ; 
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

int factorial(int n )
{
    if (n == 1 || n == 0 )
    {
        return 1 ; 
    }
    else
    {
        return n * factorial(n-1) ;
    }
    
}

int collatz(int n)
{

    if (n == 1 || n == 0 )
    {
        return 0 ; 
    }
    else if (n%2 ==0)
    {
        return 1 + collatz(n/2) ; 
    }
    else
    {
        return 1 + collatz((3*n)+1) ; 
    }
}