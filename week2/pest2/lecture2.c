#include "cs50.h"
#include "ctype.h"
#include <stdio.h>
#include "string.h"


int main(int argc , string argv[]){
    // string name = get_string("What is your name? ");
    // int n = strlen(name) ; 
    printf("Before : %s\n" , argv[1]) ; 
    
    for (int i = 0 , n = strlen(argv[1]) ; i< n ; i++){
        if ( argv[1][i] >= 'a' && argv[1][i] <= 'z'){ // This line can change to the boolean value. (islower(name[i]))
            argv[1][i]-=32 ; // Using type library ctype -> toupper(name[i])
        }
    } // If you change to ctype I can remove the condition . 
    
    // Method 2 
    // for (int j = 0 ; j < n ; j++){
    //     if (islower(name[j])){
    //         toupper(name[j]);
    //     }
    // }

    printf("After : %s \n" , argv[1]) ; 
    // printf("argc : %i \n " , argc);  // argc = Len array of argv 
    return 0 ; 
}