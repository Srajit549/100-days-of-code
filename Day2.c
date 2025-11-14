#include<stdio.h>
int main(){

    int a, b, sum, product, difference, quotient;
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);

    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = a / b;

    printf("The sum of the two numbers is: %d\n", sum);
    printf("The difference between the two numbers is: %d\n", difference);
    printf("The product of the two numbers is: %d\n", product);
    printf("The quotient obtainned from division of a by b is: %d\n", quotient);

    return 0;

}