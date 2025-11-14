#include<stdio.h>
int main(){
    int n, sum;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    sum = (n * (n + 1)) / 2;
    printf("The sum of first n natural numbers is: %d", sum);
    return 0;

}