#include<stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",& n);
    if(n < 0)
    printf("\nThe number %d is negative.", n);
    else if (n > 0)
    printf("\nThe number %d is positive.",n);
    else
    printf("\n0 is not positive nor negative.");
    return 0;
    
}