#include <stdio.h>
int main() {   
    //Write a C program that takes two integer values as input from the user. Then swap the values taken from the user and display the output of the variables.
    int number1;
    int number2;
    printf("Swaping of two numbers \n");
    printf("---Before Swaping---\n");
    printf("Enter First number: ");
    scanf("%d",&number1);

    printf("Enter second number: ");
    scanf("%d",&number2);

    int tempumber;
    tempumber = number1 + number2;

    number1 = tempumber - number1;
    number2 = tempumber - number2;

    printf("---After Swaping---\n");
    printf("First Number Now is: %d \n" ,number1);
    printf("Second Number Now is: %d",number2);
    return 0;
}
