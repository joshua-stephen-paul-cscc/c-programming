#include<stdio.h>
int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", & marks);
    if(marks >= 95)
    printf("\nA Grade");
    else if (marks >= 75)
    printf("\nB Grade");
    else if (marks >= 50)
    printf("\nC grade");
    else
    printf("\nFail");
    return 0;
}