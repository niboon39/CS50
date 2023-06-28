#include "stdio.h"
#include "cs50.h"

typedef struct 
    {
        /* data */
        string name ; 
        int age ;
        int votes; 

    } cadinate;

cadinate  get_cadidate (string prompt) ; 

int main (void)
{

    // cadinate president = get_cadidate("*** Enter a candinate ***") ; 
    // printf("%s \n" , president.name) ;
    // printf("%i\n" , president.votes) ;  
    
    cadinate candinate_array[3] ; 
    for (int i = 0 ; i < 3 ; i++)
    {
        candinate_array[i] = get_cadidate("*** Enter a candinate ***") ; 
        printf("name : %s , votes : %i \n" , candinate_array[i].name , candinate_array[i].votes);
    }

    return 0 ; 
}

cadinate get_cadidate(string prompt )
{
    
    printf("%s\n" , prompt); 
    cadinate person ; 
    person.name = get_string("Enter a name : ") ; 
    person.votes = get_int("Enter a number of votes : ") ; 
    person.age = get_int("Enter age : ") ;     
    return person ; 

}
