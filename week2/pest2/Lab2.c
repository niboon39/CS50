#include "stdio.h" 

int compute_score(char players[50]) ; 
int str_len(char str[50]) ; // Limit string at 50 words . 
 
int main (void){
    char player1[50] , player2[50]  ; 
    int score[2]; 

    printf("Player 1: ");
    scanf("%s" , &player1) ;
    printf("Player 2: ");
    scanf("%s" , &player2) ;  
    
    /* Check string Player 1 */
    for(int i = 0 ; i < str_len(player1) ; i++){
        if (player1[i] > 90){
            player1[i] = player1[i] - 32 ; 
        }
        
    }

    /* Check string Player 2 */
    for(int i = 0 ; i < str_len(player2) ; i++){
        if (player2[i] > 90){
            player2[i] = player2[i] - 32 ; 
        }
    }

    // printf("Player 1 : %s , Player 2 : %s \n" , player1 , player2) ; 

    int s1 = compute_score(player1) , s2 = compute_score(player2) ;

    if (s1 > s2){ printf("Player 1 wins!"); } 
    else if (s2 > s1){printf("Player 2 wins!"); }
    else{ printf("Tie!");}

    return 0 ; 
}

int str_len(char str[50])
{
    int length = 0 ; 
    for (int i = 0 ; str[i] != '\0' ; i++){
        length++ ; 
    }
    return length ; 
}


int compute_score(char players[50])
{
    char alphabet [27] = {'A' , 'B' , 'C' , 'D' , 'E' , 'F' , 'G' , 'H' , 'I' , 
                          'J' , 'K' , 'L' , 'M' , 'N' , 'O' , 'P' , 'Q' , 'U' , 
                          'R', 'S' , 'T' , 'U' , 'V' , 'W' , 'X' , 'Y' , 'Z' };

    int point[27] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10} ; 
    int score = 0 ;
    // int index_players[50]

    /* Get the index of players  */
    for (int i = 0 ; i < str_len(players) ; i++){
        for (int j = 0 ; j < 27 ; j++){
            if (players[i] == alphabet[j]){
                // index_players[i] = j ;  // Check index of player 
                score += point[j] ; 
            }else{
                score += 0 ; 
            }
        }
    }

    /* Print array  */
    // for (int k = 0 ; k<str_len(players) ; k++){
    //     printf("%i " , index_players[k]) ; 
    // } 
    return score ;
}

