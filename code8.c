//Code : Left Angle Traingle
#include <stdio.h>
 
int main() {
    int i, j, rows;
    
    printf("---Left Triangle Pattern---\n");
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
 
    for(i = 0; i < rows; i++){
        // printing space and *
        for(j = 0; j < rows; j++){
            if(j < rows-i-1){
                printf("  ");
            } else {
                printf("* ");
            }
        }
        // next line
        printf("\n");
    }
    return 0;
}
