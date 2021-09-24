#include <stdio.h>
int main()
{
    //Question: A customer asks FBR to develop a program in C language, which can take tax rate and salary of an employee from the user on runtime and then calculate the tax, the user has to pay the salary he/she will have after paying the tax. This information is then provided to the user.
    float salary;
    float taxrate;
    float taxreduced;
    
    printf("Enter Your Salary: ");
    scanf("%f",&salary);

    printf("Enter Tax Rate: ");
    scanf("%f",&taxrate);

    //Calculating Tax
    taxreduced = salary * ((taxrate)/100);
    printf("tax is: %f \n",taxreduced);

    //Calculating Salary To Pay
    float salarytopay;
    salarytopay = salary - taxreduced;
    printf("You now need to pay is %f",salarytopay);
    return 0;
}