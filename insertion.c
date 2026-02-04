#include <stdio.h>

int main() {
    int n, pos, i, item;

    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    int A[n + 1];

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter the position and the element you want to add: ");
    scanf("%d %d", &pos, &item);
    
    for (i = n; i >= pos - 1; i--) {
        A[i + 1] = A[i];
    }
    A[pos - 1] = item;

    printf("The array elements after insertion:\n");
    for (i = 0; i < n + 1; i++) {
        printf("%d ", A[i]);
    }
    return 0;
}
