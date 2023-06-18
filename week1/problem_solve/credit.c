#include "stdio.h"
#include "cs50.h"
#include "stdbool.h"

bool checksum(long num) ;


int main (int argc , string argv[]){
    long num ;
    do{
        num = get_long("Number: ");
    }while(num < 1);

    // printf("Result : %i \n", checksum(num)) ;
    long cpnum = num;
    // printf("%ld\n" , cpnum) ;
       while(1){
        // printf("Y\n");
        if (cpnum >= 10 && cpnum <= 99){
            break;
        }
        // printf("%ld\n" , cpnum);
        cpnum/=10 ;
    }

    // printf("ans is %ld\n" , cpnum) ;

    if (checksum(num) == 1) {
        /* What is kind of credit card?  */
        // printf("Watiting...\n");

        if (cpnum == 34 || cpnum ==37){
            printf("AMEX\n") ;
        }else if (cpnum >= 40 && cpnum <= 49 ){
            printf("VISA\n");
        }else if (cpnum >= 51 && cpnum <= 55){
            printf("MASTERCARD\n");
        }else{
            printf("INVALID\n");
        }

    }else{
        printf("INVALID\n");
    }

    return 0 ;
}

bool checksum(long num){
    /* Every 2 digit*/
    int i = 0 , buff_c = 0 , unbuff_c=0 ;
    int buffer[50]={0} , unbuffer[50]={0};
    while(num > 0){
        if(i%2 == 0){
            buffer[buff_c] = num % 10 ; // buffer were not * 2
            buff_c++ ;
        }else{
            unbuffer[unbuff_c] = num % 10 ; // unbuffer will * 2
            unbuff_c++ ;
        }
        i++ ;
        num /= 10 ;
    }

    /* Print check buffer & unbuffer */
    // for(int k = 0 ; k< 50 ; k++){
        // printf("%i" , buffer[k]);
    // }
    // printf("\n");

    /* Multiples 2 in unbuffer */
    int digit_unbuff[50]={0};
    int u = 0 ;
    while(u < unbuff_c){ // unbuff_c % buff_c is len of long num ;
        int l = u  ;
        if (unbuffer[u] * 2 >= 10){
            // printf("im here \n");
            int bc = unbuffer[u]*2 ;
            // printf("%i\n",bc);
            while(bc > 0   ){
                // printf("im here2 \n");
                digit_unbuff[u] += bc % 10 ;
                // l+=1 ;
                bc /= 10 ;
            }
        }else{
            digit_unbuff[l] += (unbuffer[u]*2) ;
        }
        u++ ;
    }
    int sum_un = 0 ;
    for (int s = 0 ; s < 50 ; s++){
        // printf("%i ",digit_unbuff[s]) ;
        sum_un += digit_unbuff[s];
    }
    // printf("\n");
    // printf("Sum & Multiply by 2 is %i\n",sum_un) ;

    /* Sum buffer */
    int sum_buff = 0 ;
    for (int y = 0 ; y < buff_c ; y++){
        sum_buff += buffer[y] ;
    }
    // printf("Sum Not Multiply by 2 is : %i \n" , sum_buff) ;


    if ((sum_un + sum_buff) % 10 == 0 && (buff_c+unbuff_c) > 12 ){
        // printf("Yes\n") ;
        return 1 ;
    }
    else {
        // printf("No\n");
        return 0 ;
    }
}