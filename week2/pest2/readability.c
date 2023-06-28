#include "stdio.h"
#include "cs50.h"
#include "string.h"

int count_sentences(string s) ;
int count_letters(string l);
int count_words(string w) ;

int main ()
{
    string test = get_string("Text: ");

    int cs =  count_sentences(test) ;
    int cl =  count_letters(test);
    int cw =  count_words(test);
    // printf("CS : %i , CL : %i , CW : %i \n" , cs , cl ,cw);
    float L = ((float)cl/(float)cw) * 100.0 ;
    float S = ( (float)cs / (float)cw ) * 100.0 ;
    // printf("L : %.2f\n" , L);
    // printf("S : %.2f\n" , S);
    int grade = round(0.0588 * L - 0.296 * S - 15.8) ;


    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >=1 && grade <=10){
        printf("Grade %i\n" , grade);
    }
    else
    {
        printf("Grade 16+\n");
    }

    return 0 ;
}


int count_sentences(string s)
{
    int n = strlen(s) ;
    int sentence = 0 ;
    for (int i = 0 ; i < n ; i++)
    {
        if (s[i] == '.' || s[i] == '!' || s[i] == '?')
        {
            /* Count sentences */
            sentence+=1 ;
        }
    }
    // printf("Sentence : %i \n" , sentence ) ;
    return sentence;
}

int count_letters(string l)
{
    int n = strlen(l);
    int letter = 0 ;
    for (int i = 0 ; i < n ; i++)
    {
        // printf("%c",l[i]);
        if (l[i] == '.' || l[i] == ',' || l[i] == '"' || l[i] == '\'' || l[i] == '?' || l[i] == ' ' || l[i] == ':' || l[i] == ';' || l[i] == '-' || l[i] =='!'){
            continue;
        }
        letter+=1 ;
    }
    // printf("Letter : %i \n" , letter  );
    return letter ;
}

int count_words(string w)
{
    int n = strlen(w) ;
    int words = 1 ;
    for (int i = 0 ; i < n ; i++)
    {
        if (w[i] == ' '){
            words+=1 ;
        }
    }
    // printf("Words: %i \n" , words);

    /* At the end of the words +=1 */
    return words ;
}