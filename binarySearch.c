#include <stdio.h>

int main() {
    int n, x, i;
    int low, high, mid;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int A[n];

    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &x);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (A[mid] == x) {
            printf("Element found at position %d", mid + 1);
            return 0;
        }
        else if (A[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    printf("Element not found");
    return 0;
}
