#include<stdio.h>
int main() {
    int l,b,perimeter;
    printf("Enter the length: ");
    scanf("%d",& l);
    printf("\n Enter the breadth: ");
    scanf("%d",& b);
    perimeter = 2*(l + b);

    printf("\n The perimeter is: %d ", perimeter);
    return 0;
}