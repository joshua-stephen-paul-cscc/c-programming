#include<stdio.h>
int main() {
    int age;
    printf("Enter your age:    \n");
    scanf("%d",& age);
     
    if(age<13 || age >= 60)
    printf("Discount is available.");
    else
    printf("Regular ticket.");
  return 0;
}