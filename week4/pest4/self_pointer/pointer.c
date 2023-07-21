#include <stdio.h>

int main (int argc , char * argv[])
{
    char *s = "HI!" ; 
    printf("%p\n" , s) ; 
    printf("%c , %c , %s \n", *s , s[0] , s); 
    printf("%c , %c , %s \n", *(s+1) , s[1] , s+1); 
    printf("%c , %c , %s \n", *(s+2) , s[2] , s+2); 
    printf("%c , %c , %s \n", *(s+3) , s[3] , s+3); 
    return 0 ; 
} 