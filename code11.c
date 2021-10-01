#include<stdio.h>
int main ()
{
int number, digit, total;
printf("---Sum of first and second last digit of any 5 digit number---\n");
printf ("Enter any 5 digit number: ");
scanf ("%d", &number);
 
digit = number%10;
printf("last digit is %d.\n",digit);

digit = (number/10) % 10;
printf("second last is %d.\n",digit);
total = digit;

digit = (number/100) % 10;
printf("third digit is %d.\n",digit);

digit = (number/1000) % 10;
printf("second digit is %d.\n",digit);

digit = (number/10000 % 10);
printf("first digit is %d.\n",digit);
total = total + digit;
printf("sum of first and second last digit is: %d",total);

return 0;
}