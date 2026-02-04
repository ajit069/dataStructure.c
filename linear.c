#include <stdio.h>

int main() {
    int n, x, i;
    int found = 0;

    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    int A[n];

    printf("\nEnter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("\nEnter the element you need to find: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (A[i] == x) {
            printf("\nYour element %d is found at %d position.\n", x, i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("\nYour element %d is not here.", x);
    }

    return 0;
}
