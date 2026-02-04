#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int A[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    //a = a + b - (b = a); a ^= b ^= a ^= b;
    printf("The array elements:\n");
    for(i = 0; i < n; i++){
        printf("\t%d", A[i]);
    }

    for(i = 0; i < n / 2; i++) {
        A[i] = A[i] ^ A[n - i - 1];
        A[n - i - 1] = A[i] ^ A[n - i - 1];
        A[i] = A[i] ^ A[n - i - 1];
    }

    printf("\nReversed array:\n");
    for(i = 0; i < n; i++) {
        printf("\t%d ", A[i]);
    }

    return 0;
}
