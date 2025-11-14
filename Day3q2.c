#include<stdio.h>
int main(){
    int a, b, c;
    
    a = 3;
    b = 5;
    printf("Before swap, a = %d; b = %d\n", a, b);

    c = a;
    a = b;
    b = c;

    printf("After swap, a = %d; b = %d", a, b);
    return 0;
    
}