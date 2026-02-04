#include<stdio.h>

int main(){
    int r,c,i,j;
    int sum = 0;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int A[r][c];

    printf("\nEnter the matrix (%d X %d) elements:\n", r, c);
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            scanf("%d", &A[i][j]);
            if(i == j){
                sum+=A[i][j];
            }
        }
    }

    printf("The sum of the diagonal elements is %d.", sum);

    return 0;
}