#include<stdio.h>
int main() {
    int n;
    printf("Enter the value of n :\n");
    scanf("%d", &n );
    printf("The sum of natural numbers is : %d", (n*(n-1))/2 );
    return 0;
    
}