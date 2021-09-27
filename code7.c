//Code : Right Angle Traingle
#include <stdio.h>
int main()
{
    int i,j,rows;
   printf("---Rigth Traingle Pattern---\n");
   printf("Input number of rows : ");
   scanf("%d",&rows);

   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	   printf("* ");
	printf("\n");
   }

   printf("Input number of rows : ");
   scanf("%d",&rows);

   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	   printf("%d ",j);
	printf("\n");
   }
    
}