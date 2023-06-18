#include "stdio.h"
#include "cs50.h"

int main(int argc , string argv[]){
    int n  ;
    do{
      n  = get_int("Height: ") ;
    }while((n < 1) || (n > 8)) ;

    for (int y = 0 ; y < n ; y++ ){
        /* Print space */

        for (int i = 0 ; i< n-y-1 ; i++){
            printf(" ") ;
        }
        
        /* Print Blocks */
        for (int x = 0 ; x <= y  ; x++){
            printf("#");
        }

        printf("  ") ;
        for (int x = 0 ; x <=y   ; x++){
            printf("#");
        }
        printf("\n");
    }
}