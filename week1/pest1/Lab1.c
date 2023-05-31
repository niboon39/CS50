#include <stdio.h>
#include <math.h>

int get_input_llamas();
int get_input_goal( int num) ;

int main(void){
    int num_llamas=0 , goal_llamas=0 , i=0 ;

    num_llamas = get_input_llamas() ;
    goal_llamas = get_input_goal(num_llamas);


    while (num_llamas < goal_llamas){
        /* code */
        int pass_away = num_llamas/ 4;
        int born = num_llamas / 3  ;
        // printf("Pass away : %f , Born : %f \n" ,round( pass_away) , round(born));
        num_llamas = num_llamas + born - pass_away;
        i++;
        // printf("Check LLamas : %i \n" , num_llamas) ;
    }

    printf("Years: %i\n" , i) ;
}

int get_input_llamas(){
    int num ;
    do{
        printf("Start size: ") ;
        scanf("%i" , &num) ;
    } while (num < 9.0 ) ;  // 9.0 from assessment
    return num ;
}

int get_input_goal( int num){
    int goal;
    do{
        printf("End size: ");
        scanf("%i" , &goal) ;
    }while (goal < num);
    return goal ;
}