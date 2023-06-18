// This is the Greedy Algorithms

#include "stdio.h"
#include "cs50.h"

int get_cents(void) ;
int calculate_quarters(int cents) ;
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void){
    int cents = 0  , q , d , n , p , update   ;

    cents = get_cents() ;

    // printf("ch_in : %i \n" , change_in);
    q = calculate_quarters(cents);
    update = cents - (q * 25);
    d = calculate_dimes(update);
    update = update - (d * 10);
    n = calculate_nickels(update);
    update = update - (n * 5);
    p = calculate_pennies(update);
    // printf("q= %i , d= %i , n= %i , p= %i \n" , q , d , n , p ) ;
    printf("%i\n" , q+d+n+p) ;
}

int get_cents(){
    int change = 0  ;
    // char input[200] ;
    do{
        // printf("Change owed: ");
        change  = get_int("Change owed: ") ;
        // fgets(input, sizeof(input), stdin);
    }while(change < 0 ) ;
    // while (change < 0  || sscanf(input, "%d", &change) != 1 );
    return change;
}

int calculate_quarters (int cents){
    return cents /= 25 ;
}

int calculate_dimes (int cents){
    return cents /= 10 ;
}

int calculate_nickels (int cents) {
    return cents /= 5 ;
}

int calculate_pennies (int cents ){
    return cents /= 1 ;
}