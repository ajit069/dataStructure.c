#include<stdio.h>

int main(){
    int r,c,i,j;
    int count = 0;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int A[r][c];

    printf("\nEnter the matrix (%d X %d) elements:\n", r, c);
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            scanf("%d", &A[i][j]);
             if (i < j && A[i][j] != 0) {
                count++;
            }
        }
    }
    if(count == 0)
    printf("This given matrix is a Lower Triangular Matrix.");
    
    else
    printf("This given matrix is not a Lower Triangular Matrix.");

    return 0;
}