#include "stdio.h"
#include "cs50.h"

int main (int argc , string argv[])
{
    float total , tax , tip , buff;
    total = get_float("Bill before tax and tip: ");
    tax = get_float("Sale Tax Percent: ");
    tip = get_float("Tip percent: ");

    buff = (total * tax)/ 100  ;
    total += buff ;
    buff = (total * tip)/100 ;
    total += buff ;
    printf("$%.2f" , total/2) ;
}