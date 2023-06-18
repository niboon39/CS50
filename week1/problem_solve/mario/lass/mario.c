#include "stdio.h"
#include "cs50.h"

int main(int argc , string argv[]){
    int n  ;
    do{
      n  = get_int("Height: ") ;
    }while((n < 1) || (n > 8)) ;

    for (int y = 1 ; y <= n ; y++ ){
        /* Print space */
        for (int i = 1 ; i<= n-y ; i++){
            printf(" ") ;
        }
        /* Print Blocks */
        for (int x = 1 ; x <= y  ; x++){
            printf("#");
        }
        printf("\n");
    }
}