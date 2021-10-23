#include <stdio.h>
int main()
{
	int sideAB,sideBC,sideCD,sideDA;
	int angleA,angleB,angleC,angleD;
    int sumofangle;
	
	  printf("enter lenght of side AB: ");
	  scanf("%d",& sideAB);
	 
	  printf("enter lenght of side BC: ");
      scanf("%d",& sideBC);  
	
	  printf("enter lenght of side CD: ");
      scanf("%d",& sideCD);
	  
	  printf("enter lenght of side DA: ");
      scanf("%d",& sideDA);
      
      printf("enter angle of A: ");
      scanf("%d",& angleA);
      
      printf("enter angle of B: ");
      scanf("%d",& angleB);
      
      printf("enter angle of C: ");
      scanf("%d",& angleC);
      
      printf("enter angle of D: ");
      scanf("%d",& angleD);
      
      sumofangle = angleA + angleB + angleC + angleD;
      if(sumofangle == 360)
      {
          printf("This is a Quadrilateral.\n");
          if(angleA==90 && angleB==90 && angleC==90 && angleD==90)
          {
              printf("This is either a Squre or a Rectangle\n");
              if(sideAB==sideBC && sideBC==sideCD && sideCD==sideDA && sideDA==sideAB)
              {
                  printf("This is a Square\n");
              }
              else if(sideAB==sideCD && sideBC==sideDA)
              {
                  printf("This is a Rectangle\n");
              }
          }
          else if(angleA==angleC && angleB==angleD)
          {
              printf("This is either a Rhombus, Kite Or Parallelogram \n");
              if(sideAB==sideBC && sideBC==sideCD && sideCD==sideDA && sideDA==sideAB)
              {
                  printf("This is a Rhombus\n");
              }
              else if(sideAB==sideCD && sideBC==sideDA)
              {
                  printf("This is a Parallelogram\n");
              }
              else if(sideAB==sideBC && sideCD==sideDA)
              {
                  printf("This is a Kite\n");
              }
          }
          else
          {
              printf("This is a Trapezoid");
          }
      }
      else
      {
          printf("This is a not a Quadrilateral.");
      }
    return 0;
}