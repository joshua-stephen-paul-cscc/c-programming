#include<stdio.h>
int main() {
    int age,marks;
    char id;
    printf("Enter your age: ");
    scanf("%d", & age);
    printf("\nEnter your marks: ");
    scanf("%d",& marks);
    printf("\nEnter if you have an ID card (Yes = 1 & No = 0): ");
    scanf(" %c", & id);


     if(age>=18 && id=='1')
     printf("\nAllowed to enter.");
     else if(marks>=90 || id=='1')
     printf("\nSpecial Permission.");
     else if(!id=='1')
     printf("\nID card is required.");
     else
     printf("\nNot eligible to write the exam.");
     return 0;
}