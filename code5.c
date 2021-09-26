//Question: Fahrenheit To Calsius Converter
#include <stdio.h>
int main ()
{
    float fahrenheit;
    float calsius;
    printf("---Fahrenheit To Calsius Converter---\n");
    printf("Enter Fahrenheit: ");
    scanf("%f",&fahrenheit);

    calsius = (fahrenheit - 32) * 5/9;

    printf("Calsius is: %3f ",calsius);
    return 0;
}