#include<stdio.h>
int main(){
    int p, r, t, si;
    printf("Enter the time:");
    scanf("%d", &t);
    p = 10;
    r = 50;
    si = (p * r * t)/100;
    printf("The simple interest is: %d", si);
    return 0;
}