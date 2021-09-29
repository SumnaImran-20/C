#include <stdio.h>
#include <math.h>
int main()
{   
    printf("---Distance Fomula Program---\n");
    float x1, y1, x2, y2,x,y,z,distance;
	printf("Input x1: ");
	scanf("%f", &x1);

	printf("Input y1: ");
	scanf("%f", &y1);
              
    printf("Input x2: ");
	scanf("%f", &x2);

	printf("Input y2: ");
	scanf("%f", &y2);

	/* simple method
    x = ((x2-x1)*(x2-x1));
    y =((y2-y1)*(y2-y1));
    z = x + y; */

    distance = sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));
	printf("Distance between the said points: %.2f m", distance);
	printf("\n");
	return 0;
}