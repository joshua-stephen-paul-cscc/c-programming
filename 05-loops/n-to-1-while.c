#include<stdio.h>
int main (){
    /*changing variable = n
    starts = n
    condition = n>=1
    update = n--
    work= print n*/
    int n;
    printf("Enter the value of n : ");
    scanf("%d",& n);
     while(n>=1) {
        printf("%d ",n);
        n--;
     }
     return 0;
}