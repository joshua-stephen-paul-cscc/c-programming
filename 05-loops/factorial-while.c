#include<stdio.h>
int main() {
    int i =1,n;
    printf("Enter a number n:  ");
    scanf("%d",& n);
    int factorial = 1;
    while(i<=n) {
        factorial = factorial * i;
        i++;
    } printf("%d", factorial);
    return 0;
    }
