#include<stdio.h>
int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d",& marks);
    if(marks >= 40)
    printf("\nYou have passed.");
    else
    printf("\nYou have failed.");
    return 0;
}