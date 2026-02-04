#include<stdio.h>

int main(){
    int n, i = 0;

    printf("Enter the number of terms: ");
    scanf("%d",&n);

    int A[n];
    
    printf("Enter the array elements:");
    for(; i < n; i++){
        scanf("%d",&A[i]);
        printf("\nThe %d array element is %d.",i+1, A[i]);
    }
    return 0;
}