#include<stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",& n);
    if(n%2==0)
    {printf("\n The number %d is even.",n); 
    }
    else
    printf("\n The number %d is odd.",n);
    return 0;

}