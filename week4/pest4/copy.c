#include "stdio.h"
#include "cs50.h"
#include "ctype.h"
#include "stdlib.h"
#include "string.h"

int main(int argc , string argv[])
{
    /* NULL is zero address. */
    char  *s = get_string("s: ") ;
    if (s == NULL)
    {
        return 1 ;
    }
    
    char  *t = malloc(strlen(s+1)) ; // String + '/0' (1)
    if (t == NULL)
    {
        return 2 ;
    }

    for(int i = 0 , size = strlen(s)+1 ; i < size ; i++)
    {
        t[i] = s[i] ;
    }
    // strcpy(t,s);

    if (strlen(t) > 0 )
    {
        t[0] = toupper(t[0]) ;
    }
    printf("s : %s \n" , s) ;
    printf("t : %s \n" , t) ;

    /* If my program finish, I should free the memory. */
    free(t);

    return 0;
}