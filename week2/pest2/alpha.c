#include "cs50.h"
#include "stdio.h"
#include "string.h"

int main (int argc , string argv[]){

    for(int i = 0 ; i < strlen(argv[1]) ; i++)
    {
        if (argv[1][i] < argv[1][i+1] )
        {
            printf("Yes\n") ; 
            return 0 ; 
        }else{
            printf("No\n") ; 
            return 0 ;
        }
    }
}