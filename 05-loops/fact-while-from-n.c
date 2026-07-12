#include<stdio.h>
int main () {
    int i,fact;
    int n;
    printf("Enter a positive number n : ");
    scanf("%d",& n);
    i = n;
    fact = 1;

    while(i >= 1) {
        fact = fact * i;
        i--;

}
printf("%d", fact);
return 0;
    
}