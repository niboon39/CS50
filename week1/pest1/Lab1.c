#include <stdio.h>
#include <math.h>

int get_input_llamas(int num);
int get_input_goal(int goal , int num) ;

int main(void){
    int num_llamas=0 , goal_llamas=0 , i=0 ;

    num_llamas = get_input_llamas(num_llamas) ;
    goal_llamas = get_input_goal(goal_llamas , num_llamas);


    while (goal_llamas > num_llamas){
        /* code */
        float pass_away = (float)num_llamas/4.0f , born = (float)num_llamas/3.0f ;
        // printf("Pass away : %f , Born : %f \n" ,round( pass_away) , round(born));
        num_llamas = num_llamas + round(born-pass_away);
        i++;
        // printf("Check LLamas : %i \n" , num_llamas) ;
    }

    printf("Years: %i\n" , i) ;
}

int get_input_llamas(int num ){
    do{
        printf("Start size: ") ;
        scanf("%i" , &num) ;
    } while (num < 9.0 ) ;  // 9.0 from assessment
    return num ;
}

int get_input_goal(int goal , int num){
    do{
        printf("End size: ");
        scanf("%i" , &goal) ;
    }while (goal < num);
    return goal ;
}