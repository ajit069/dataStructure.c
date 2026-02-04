#include<stdio.h>

int main(){

    int n,i,sum=0;

    printf("Enter the number of terms: ");
    scanf("%d",&n);

    int A[n];
    printf("Enter the array elements:");
    for(i = 0; i < n; i++){
        scanf("%d",&A[i]);
        sum = sum + A[i];
    }

    printf("The sum of %d array elements is %d.",n,sum);
    
    return 0;
}