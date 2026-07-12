#include<stdio.h>
int main() {
    /*changing variable = i
    starts = 1
    work = sum of numbers
    update = i+=2 */
    int n,i,sum =0;
    i=1;
    printf("Enter the value of n: ");
    scanf("%d", & n);
    
     while(i<=n) {
        sum = sum + i;
        i+=2;}
        printf("%d",sum);
        return 0;

}