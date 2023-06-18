#include "stdio.h"
#include "cs50.h"
#include "string.h"

void print_bulb(int arr[200] , int size) ;

int main(int argc , char* argv[]){

    char get_message[200] ;
    int str2int[200] ;

    printf("Message: ");
    // scanf("%[^\n]%*c", get_message) ; // Note [type char ] doesn't need &  and "%[^\n]%*c" use this to get string.
    fgets(get_message, sizeof(get_message), stdin);
    // printf("%lu\n" , strlen(get_message)) ; // Check string input.



    for (int ch = 0 ; ch < strlen(get_message) ; ch++){
        str2int[ch] = (int) get_message[ch] ;
        // printf("add\n") ;
    }

    int size = 8*strlen(get_message);
    int dec2bin[size];

    for (int i = 0 ; i < strlen(get_message) ; i++){
        int index =  ((i+1) * 8) -1  ;
        int temp = str2int[i] ;
        for (int k = 0 ; k < 8 ; k ++){
            dec2bin[index] = temp % 2 ;
            temp /=2 ;
            index -- ;
        }
    }

    /* Reverse array */
    // for (int j = 0 ; j < size/2 ; j++){
    //     int temp = dec2bin[0] ;
    //     dec2bin[0] = dec2bin[j+1] ;
    //     dec2bin[j+1] = temp ;
    // }

    /*.Print string */
    // for (int i = 0 ; i < size  ; i++){
    //     if (dec2bin[i] == 1){
    //         printf("🟡");
    //     }else{
    //         printf("⚫");
    //     }
    //     // if ((i+1)%8 == 0 && i!=0 && i!= size-1){
    //     if ( (i+1) % 8 == 0  ){
    //         printf("\n");
    //     }
    // }
    // printf("\n") ;

    /* Function print  */
    print_bulb(dec2bin , size);


    return 0 ;
}

void print_bulb(int arr[200] , int size ){
    for(int i = 0 ; i < size ; i++){
        if ( arr[i] ==1  ){
            printf("🟡") ; // 🟡 is 1.
        }else{
            printf("⚫") ; // ⚫ is 0.
        }
        if (((i + 1) % 8 == 0 && (i + 1) != size) ){
            printf("\n") ;
        }
    }
}