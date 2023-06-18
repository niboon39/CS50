#include "stdio.h"
#include "string.h"
#include "cs50.h"
typedef struct 
{
    string names ; 
    string numbers ; 
    string address ; 
}person ; 

int main (){
    // string names[] = {"khing" , "kham"} ; 
    // string numbers[] = {"+66951847769" , "+66923345674"} ; 
    person people[3] ; 
    people[0].names = "khing" ; 
    people[0].numbers="+66951847769" ; 
    people[0].address = "2905 63 Latrobe st VIC Melbourne 3000" ; 


    people[1].names = "kham" ;
    people[1].numbers = "+66923345674" ; 
    people[1].address = "2309 4 Burck st VIC Queenlands 3210" ; 
    

    char input[20] ; 
    scanf("%s" , &input) ; 
    // printf("%s",input); 
    for (int i = 0 ; i < 2 ; i++){
        if ( strcmp(people[i].names, input) == 0  ){
            printf("Found phone number : %s\n" , people[i].numbers) ; 
            printf("Found address : %s\n" , people[i].address) ; 
            return 0 ; 
        }
    }
    printf("Not found \n") ; 

    return 1 ; 
}