#include<stdio.h>
int main(){
    printf("Enter your age : \n");
    int age;
    scanf("%d", &age);

    if (age <= 13)
    printf("You are a child");
    else if (age >= 60)
    printf("You are an elder");
    else 
    printf("You are an adult");

    return 0;


}