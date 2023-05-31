// This is the Greedy Algorithms 
#include "stdio.h"

int calculate_quarter(int change) ; 
int calculate_dimes(int change); 
int calculate_nickels(int change); 
int calculate_pennies(int change); 

int main(void){
    int change_in , q , d , n , p , update   ; 
    do{
        printf("Change owed: ");
        scanf("%i" , &change_in); 
    }
    while (change_in < 0 );
    // printf("ch_in : %i \n" , change_in);
    q = calculate_quarter(change_in) ; 
    update = change_in - (q*25) ; 
    d = calculate_dimes(update); 
    update = change_in - (q*25) - (d*10); 
    n = calculate_nickels(update); 
    update = change_in - (q*25) - (d*10) - (n*5); 
    p = calculate_pennies(update); 
    printf("%i %i %i %i \n" , q , d , n , p ) ; 
    printf("%i\n" , q+d+n+p) ; 
    return 0 ; 
}

int calculate_quarter (int change){
    return change /= 25 ; 
}

int calculate_dimes (int change){
    return change /= 10 ; 
}

int calculate_nickels (int change) { 
    return change /= 5 ; 
}

int calculate_pennies (int change ){
    return change /= 1 ; 
}