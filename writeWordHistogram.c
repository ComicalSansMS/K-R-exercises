#include <stdio.h>
/*Exercise 1.13. Write a program to print a histogram of the lengths of word
in its input*/
main()
{
    int c, wordLength;
    wordLength = 0;
    while ((c = getchar()) != EOF){
        if(c == ' ' || c == '\n' || c == '\t'){
            for (int i = 0; i < wordLength; i++)
            {
                printf("*");
            }
        printf("\n");
        wordLength = 0;
        }else{
            wordLength++;
        }
    }
}