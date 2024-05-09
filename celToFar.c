#include <stdio.h>
/*Exercise 1.4*/

main()
{
float celcius, fahr;
int lower, upper, step;

lower = 0;
upper = 100;
step = 20;

celcius = lower;
while(celcius <= upper){
    fahr = ((9.0/5.0) * celcius) + 32.0;
    printf("%3.2f \t %6.2f \n", celcius, fahr);
    celcius += step;
}
}