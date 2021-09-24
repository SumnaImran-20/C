#include <stdio.h>
int main() {   
    //Question: Write a program that asks user to give number of days as input and convert it into weeks and months.
    int days;
    printf("Enter Number of Days: ");
    scanf("%d", &days);
    printf("Number of days are: %d \n",days);

   //converting into weeks
   int week;
   week = days / 7;
    printf("Number of days converted into weeks are: %d \n",week);

    //converting into months
    double month;
    month = days / 30.415;
    printf("Number of days converted into months are: %lf \n",month);
    return 0;
}
