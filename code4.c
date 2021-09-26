/* Question: A car traveled for some hours. The time car traveled is taken at run time of the program, 
    and it must not be negative and must be between one to five hours. The car had not 
    traveled same distance in each hour. The distance that the car covered must not be 
    negative. Write a C Program that computes the Average Speed of the Car in miles per hour. */
#include <stdio.h>
int main()
{
    int timetravel;
    int hour1;
    int hour2;
    int hour3;
    int hour4;
    int hour5;
    int totaldistance;
    int averagespeed;
    printf("---Computing Average speed of the car---\n");
    printf("Enter time traveled by the car: ");
    scanf("%d",&timetravel);

    if(timetravel < 0 || timetravel > 5)
    {
        printf("You entered a wrong number!\n");
        printf("Range is between 1 till 5 \n");
        printf("Enter again: ");
        scanf("%d",&timetravel);
        
        if(timetravel == 1)
        {
            printf("Enter Distance covered in 1 Hour: ");
            scanf("%d",&hour1);
            totaldistance = hour1;
            averagespeed = totaldistance / timetravel ;
            printf("Average speed is %d mph in %d hours \n",averagespeed,timetravel);
        }
        else if(timetravel == 2)
        {
            printf("Enter Distance covered in 1 Hour: ");
            scanf("%d",&hour1);

            printf("Enter Distance covered in 2 Hour: ");
            scanf("%d",&hour2);

            totaldistance = hour1 + hour2;
            averagespeed = totaldistance / timetravel ;
            printf("Average speed is %d mph in %d hours \n",averagespeed,timetravel);
        }
        else if(timetravel == 3)
        {
            printf("Enter Distance covered in 1 Hour: ");
            scanf("%d",&hour1);

            printf("Enter Distance covered in 2 Hour: ");
            scanf("%d",&hour2);

            printf("Enter Distance covered in 3 Hour: ");
            scanf("%d",&hour3);

            totaldistance = hour1 + hour2 + hour3;
            averagespeed = totaldistance / timetravel ;
            printf("Average speed is %d mph in %d hours \n",averagespeed,timetravel);
        }
        else if(timetravel == 4)
        {
            printf("Enter Distance covered in 1 Hour: ");
            scanf("%d",&hour1);

            printf("Enter Distance covered in 2 Hour: ");
            scanf("%d",&hour2);

            printf("Enter Distance covered in 3 Hour: ");
            scanf("%d",&hour3);
            
            printf("Enter Distance covered in 4 Hour: ");
            scanf("%d",&hour4);

            totaldistance = hour1 + hour2 + hour3 + hour4;
            averagespeed = totaldistance / timetravel ;
            printf("Average speed is %d mph in %d hours \n",averagespeed,timetravel);
        }
        else
        {
            printf("Enter Distance covered in 1 Hour: ");
            scanf("%d",&hour1);

            printf("Enter Distance covered in 2 Hour: ");
            scanf("%d",&hour2);

            printf("Enter Distance covered in 3 Hour: ");
            scanf("%d",&hour3);

            printf("Enter Distance covered in 4 Hour: ");
            scanf("%d",&hour4);

            printf("Enter Distance covered in 5 Hour: ");
            scanf("%d",&hour5);

            totaldistance = hour1 + hour2 + hour3 + hour4 + hour5;
            averagespeed = totaldistance / timetravel ;
            printf("Average speed is %d mph in %d hours \n",averagespeed,timetravel);
        }
    }
    else
    {
        if(timetravel == 1)
        {
            printf("Enter Distance covered in 1 Hour: ");
            scanf("%d",&hour1);
            totaldistance = hour1;
            averagespeed = totaldistance / timetravel ;
            printf("Average speed is %d mph in %d hours \n",averagespeed,timetravel);
        }
        else if(timetravel == 2)
        {
            printf("Enter Distance covered in 1 Hour: ");
            scanf("%d",&hour1);

            printf("Enter Distance covered in 2 Hour: ");
            scanf("%d",&hour2);

            totaldistance = hour1 + hour2;
            averagespeed = totaldistance / timetravel ;
            printf("Average speed is %d mph in %d hours \n",averagespeed,timetravel);
        }
        else if(timetravel == 3)
        {
            printf("Enter Distance covered in 1 Hour: ");
            scanf("%d",&hour1);

            printf("Enter Distance covered in 2 Hour: ");
            scanf("%d",&hour2);

            printf("Enter Distance covered in 3 Hour: ");
            scanf("%d",&hour3);

            totaldistance = hour1 + hour2 + hour3;
            averagespeed = totaldistance / timetravel ;
            printf("Average speed is %d mph in %d hours \n",averagespeed,timetravel);
        }
        else if(timetravel == 4)
        {
            printf("Enter Distance covered in 1 Hour: ");
            scanf("%d",&hour1);

            printf("Enter Distance covered in 2 Hour: ");
            scanf("%d",&hour2);

            printf("Enter Distance covered in 3 Hour: ");
            scanf("%d",&hour3);
            
            printf("Enter Distance covered in 4 Hour: ");
            scanf("%d",&hour4);

            totaldistance = hour1 + hour2 + hour3 + hour4;
            averagespeed = totaldistance / timetravel ;
            printf("Average speed is %d mph in %d hours \n",averagespeed,timetravel);
        }
        else
        {
            printf("Enter Distance covered in 1 Hour: ");
            scanf("%d",&hour1);

            printf("Enter Distance covered in 2 Hour: ");
            scanf("%d",&hour2);

            printf("Enter Distance covered in 3 Hour: ");
            scanf("%d",&hour3);

            printf("Enter Distance covered in 4 Hour: ");
            scanf("%d",&hour4);

            printf("Enter Distance covered in 5 Hour: ");
            scanf("%d",&hour5);

            totaldistance = hour1 + hour2 + hour3 + hour4 + hour5;
            averagespeed = totaldistance / timetravel ;
            printf("Average speed is %d mph in %d hours \n",averagespeed,timetravel);
        }
    }
    printf("---Thank You!---");
    return 0;
}