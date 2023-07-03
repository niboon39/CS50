#include "stdio.h"
#include "cs50.h"
#include "string.h"
#include "stdbool.h"

#define MAX 9

int candidate_count = 0   ;

void print_winner(void);
bool vote(string name);

typedef struct
{
    string name ;
    int votes ;

}candidate ;

candidate candidates[MAX] ;

int main (int argc , string argv[] )
{

    // printf("Argc : %i \n" , argc );

    // Check for invalid usage
    if (argc < 2 )
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1 ;
    }

    // Population array of candidates
    candidate_count = argc-1 ;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n" , MAX) ;
        return 2 ;
    }

    int T = 0 ; // Total of candidates (Index).
    for (int i = 1 ; i <= MAX ; i++)
    {
        if (argv[i] == NULL)
        {
            break ;
        }
        candidates[T].name = argv[i] ;
        candidates[T].votes = 0 ;
        T+=1 ;
    }
    // for (int j = 0 ; j < T ; j++)
    // {
    //     printf("Candinates[%i] : %s\n" , j+1,candidates[j].name );
    // }
    // printf("T:%i\n",T);

    int voters = get_int("Number of voters: ");
    string n_v ;
    for (int k = 0 ; k < voters ; k++)
    {
        n_v = get_string("Vote: ") ;
        if (vote(n_v) == 1 )
        {
            continue ;
        }else{
            printf("Invalid vote.\n");
        }
    }
    /* Print check votes candidates */
    // for (int j = 0 ; j < T ; j++)
    // {
    //     printf("Candinates[%i] : %d\n" , j+1,candidates[j].votes );
    // }
    print_winner();
    return 0 ;
}

bool vote(string name)
{
    for (int i =0 ; i < candidate_count ; i++)
    {
        if ( strcmp(name , candidates[i].name) ==0 )
        {
            candidates[i].votes+=1 ;
            return 1 ;
        }
    }
    return 0 ;
}

void print_winner(void)
{
    // SET index
    int min = 0 ;
    for (int i = 1 ; i < candidate_count ; i++ )
    {
        if ( candidates[i].votes > candidates[min].votes )
        {
            min = i ;
        }
    }
    int index[candidate_count] ;
    int winner = 0 ;
    for (int j = 0 ; j < candidate_count ; j++)
    {
        if (candidates[j].votes == candidates[min].votes)
        {
            index[j] = j; // Index of candidates
            // printf("J = %i\n" , j);
            winner +=1 ;
        }
    }
    // printf("%s\n" , candidates[min].name) ;
    if (winner ==1)
    {
        printf("%s\n" , candidates[min].name) ;
    }
    else
    {
        for (int p = 0 ; p<winner ; p++)
        {
            printf("%s\n" , candidates[index[p]].name);
        }
    }
}