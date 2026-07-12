#include<stdio.h>
int main () {
    int n,i;   /*changing var = i
    starts = 2
    condition = i <= n
    update = i+=2
    work = printf i */
    i=2;
    printf("Eneter the value of n : ");
    scanf("%d", & n);
     while(i<=n){
        printf("%d ", i);
        i+=2;
     }
return 0;
}