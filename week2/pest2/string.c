#include "cs50.h" 
#include "stdio.h"
#include "string.h"

int main (void){
    char name[10] = "Emma" ; 
    int length = strlen(name) ; 

    /* Using strcmp() to compare two strings. */
    // if (strcmp(name , "Emma") == 0)
    // {
    //     printf("Yes\n");
    // }else{
    //     printf("No\n"); 
    // }

    for (int i = 0 ; i < length ; i++){
        printf("%i " , name[i]) ; 
    }
    printf("\n"); 
}