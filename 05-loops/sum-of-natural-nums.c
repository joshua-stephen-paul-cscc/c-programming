#include<stdio.h>
int main(){
    int n,i=1,sum=0;
    printf("Enter a natural number n: ");
    scanf("%d", & n);

    while(i<=n) {
        sum=sum + i;
        i++;
    }
     printf("%d",sum);
    return 0;
}