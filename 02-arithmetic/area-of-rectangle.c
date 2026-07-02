#include<stdio.h>
int main() {
    printf("Enter the length of the rectangle :\n");
    int length;
    scanf("%d", &length);
    
    printf("Enter the breadth of the rectangle : \n");
    int b;
    scanf("%d", &b);

    printf("%d is the perimeter.\n", 2 * (length + b));
    return 0;
}