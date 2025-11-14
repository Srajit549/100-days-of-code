#include<stdio.h>
int main(){
    float t, f;
    printf("Enter the temperature in Celsius: \n", t);
    scanf("%f", &t);
    f = ((9.0 / 2.0) * t) + 32;
    printf("The temperature in Fahrenheit is: %f", f);
    return 0;

}