#include "stdio.h"
int main(void)
{
    int a = 28 ;  //0x01
    int b = 50 ;  //0x02
    int *c = &a ; //0x01
    // printf("a= %p , b = %p , c = %p \n" , &a , &b , &c ) ; 
    // printf("a= %i , b = %i , c = %i \n" , a , b , *c ) ; 

    *c = 14 ; //0x01
    c = &b ; //0x02
    *c = 25 ; //0x02

    printf("a= %p , b = %p , c = %p \n" , &a , &b , &c ) ;
    printf("a= %i , b = %i , c = %i \n" , a , b , *c ) ; 

}

/*  The answer is 
    a= 14
    b= 25
    c= 25
    
 */