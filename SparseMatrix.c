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
            if(A[i][j] == 0){
                count++;
            }
        }
    }
    if(count >= (r*c)/2)
    printf("This given matrix is Sparse Matrix having %d zero elements.", count);
    
    else
    printf("This given matrix is not Sparse Matrix only having %d zero elements.", count);

    return 0;
}