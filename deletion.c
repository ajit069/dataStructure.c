#include <stdio.h>

int main() {
    int n, pos, i;

    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    int A[n];

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter the position of the element to delete: ");
    scanf("%d", &pos);

    for (i = pos - 1; i < n - 1; i++) {
        A[i] = A[i + 1];
    }

    printf("Array after deletion:\n");
    for (i = 0; i < n - 1; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
