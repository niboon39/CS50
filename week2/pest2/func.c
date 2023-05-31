#include "stdio.h"

float global = 0.5 ; 
float mul_tri(float x) ; 

int main(void)
{
    float x =  mul_tri(global) ; 
    printf("global : %.2f , function : %.2f " , global ,x);
}

float mul_tri(float x)
{
    return x*=3 ; 
}