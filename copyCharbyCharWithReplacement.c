#include <stdio.h>

/*
Exercise 1.9: Write a program to copy its input to its output, replacing each string of 1 or more blanks with a single blank
Exercise 1.10: Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b and each backslash by \\
*/
main()
{
    int c, prevc;
    prevc = "";

    //Keep a memory of the previous character, if it was a blank, do nothing
    while((c = getchar) != EOF){

        if (prevc == " "){
            prevc = c;
        }else{
            putchar(c);
            prevc = c;
        }  
    }
}