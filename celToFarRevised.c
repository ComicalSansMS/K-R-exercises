#include <stdio.h>
/*Exercise 1.15, rewrite temperature conversion with function notation*/

float celToFar(float celsius);

main()
{
float celsius;
int lower, upper, step;

lower = 0;
upper = 100;
step = 20;

celsius = lower;
while(celsius <= upper){
    celToFar(celsius);
    celsius += step;
}
return 0;
}
float celToFar(float celsius)
{
    float fahr = 0.0;
    fahr = ((9.0/5.0) * celsius) + 32.0;
    printf("%3.2f \t %6.2f \n", celsius, fahr);
    return fahr;
}