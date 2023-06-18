#include "stdio.h"
#include <stdlib.h>
#include "string.h"
#include "cs50.h"

int main (int argc , char* argv[]){
    /* argv[1] : Input key */
    // printf("%s\n" , argv[1]) ;

    if (argc != 2 ){
        printf("Usage: ./caesar key");
        return 1;
    }

    int key = atoi(argv[1]) ;

    if ( key == 0 ){
        printf("Usage: ./caesar key");
        return 1 ;
    }

    char *ptr ;
    int k = (int)strtol(argv[1] , &ptr , 10) ;
    if (*ptr != '\0'){
        puts("non-numeric key");
        return 1 ;
    }

    // printf("%i\n" ,&key) ;
    char P_in[100] ;
    printf("plaintext: ");
    fgets(P_in , sizeof(P_in) , stdin) ;

    /* Formula : (Pi + K) % 26 */
    char AtoZ[26]= {'A' , 'B' , 'C' , 'D' , 'E','F','G' ,'H' , 'I',
                    'J' , 'K' ,'L' , 'M' , 'N' , 'O' , 'P' , 'Q' , 'R',
                    'S' , 'T' , 'U' , 'V' , 'W' , 'X' , 'Y' , 'Z'};

    char atoz[26] = {'a','b','c','d','e','f','g','h','i',
                     'j','k','l','m','n','o','p','q','r',
                     's','t','u','v','w','x','y','z'};

    int size = strlen(P_in) ;
    // printf("size = %i\n" , size);
    char Ci[size] ;

    for(int i = 0 ; i<size ; i++){
        int found = 0 ;
        for (int p = 0 ; p<26 ; p++){
            // if (P_in[i] == 'a' + p) {
            //     Ci[i] = 'a' + (p + key) % 26;
            //     found = 1;
            //     break;
            // }
            // if (P_in[i] == 'A' + p) {
            //     Ci[i] = 'A' + (p + key) % 26;
            //     found = 1;
            //     break;
            // }
            if ( P_in[i] == atoz[p]) {
                Ci[i] = atoz[(p+key)%26] ;
                found = 1 ;
                break ;
            }
            if ( P_in[i] == AtoZ[p]) {
                Ci[i] = AtoZ[(p+key)%26] ;
                found = 1 ;
                break ;
            }

        }
        if (!found){ 
            Ci[i] = P_in[i] ;
        }
    }


    /* Print string array */
    printf("ciphertext: " ) ;
    for (int i = 0 ; i<size; i++){
        printf("%c",Ci[i]) ;
    }
    printf("\n") ;



    return 0 ;
}