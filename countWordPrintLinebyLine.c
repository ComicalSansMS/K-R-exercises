#include <stdio.h>


main()
{
    /*Exercise 1.12 write a program that prints its input one word at a time*/
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n'|| c == '\t' )
        {
            printf("%c \n", c);
        }else{
            printf("%c", c);
        }
        
        
    }
    
}