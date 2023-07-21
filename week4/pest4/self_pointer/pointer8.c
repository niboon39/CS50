#include "stdio.h"

const int MAX = 4 ; 

int main ()
{
    char *names[] = { "A","B","C","D" }; 

    printf("%i , %i , %i , %i\n",*names[0],*names[1],*names[2],*names[3] );

    for (int i = 0 ; i < MAX ; i++)
    {
        if ( *names[i] < 97  ){
            names[i] = *names[i] + 32 ; 
        }
        // printf("%c\n",*names[i]);
    }
    
    for (int j = 0 ; j < MAX ; j ++)
    {
        printf("char[%i] : %c \n",j, names[j]) ; 
    }

    printf("%i , %i , %i , %i\n",names[0],names[1],names[2],names[3] );

    return 0 ; 
}