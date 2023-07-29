#include "stdio.h"
#include "stdint.h"
#include "cs50.h"


int main(int argc , char * argv[])
{
    if (argc !=2)
    {
        printf("Improper usage.\n"); 
        return 1 ; 
    }

    // Open file
    string filename =  argv[1] ; 

    printf("file name : %s\n" , filename); 

    FILE *file = fopen(filename , "r") ; 
    // check if file exites 
    if (file == NULL)
    {
        printf("No such file found.\n");
        return 1 ; 
    }

    uint8_t buffer[4]; 
    uint8_t signature[4] = {37 , 80 , 68 , 70};

    fread(buffer , 1 , 4 , file) ; 
    // Check data 
    for (int i = 0 ; i < 4 ; i++)
    {
        printf("%i " , buffer[i]) ; 
        if (signature[i] != buffer[i])
        {
            printf("Likely not a PDF.\n"); 
            return 2 ; 
        }
    }
    printf("\n");
    printf("Likely a pdf.\n");
    

    return 0 ; 
}