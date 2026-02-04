#include <stdio.h>

int main() {

    int x;
    int r1, c1, r2, c2;

    printf("Welcome in Matrix Calculations\n");
    printf("Press 1 for Matrix Addition\n");
    printf("Press 2 for Matrix Subtraction\n");
    printf("Press 0 to Exit\n");
    printf("Press: ");

    scanf("%d", &x);

    switch (x) {

        case 1:
        case 2:
            printf("Enter the number of rows of 1st Matrix: ");
            scanf("%d", &r1);
            printf("Enter the number of columns of 1st Matrix: ");
            scanf("%d", &c1);

            printf("Enter the number of rows of 2nd Matrix: ");
            scanf("%d", &r2);
            printf("Enter the number of columns of 2nd Matrix: ");
            scanf("%d", &c2);

            if (r1 == r2 && c1 == c2) {

                int A[r1][c1], B[r2][c2], C[r1][c1];

                printf("Enter elements of 1st Matrix (%d x %d):\n", r1, c1);
                for (int i = 0; i < r1; i++) {
                    for (int j = 0; j < c1; j++) {
                        scanf("%d", &A[i][j]);
                    }
                }

                printf("Enter elements of 2nd Matrix (%d x %d):\n", r2, c2);
                for (int i = 0; i < r1; i++) {
                    for (int j = 0; j < c1; j++) {
                        scanf("%d", &B[i][j]);
                    }
                }

                for (int i = 0; i < r1; i++) {
                    for (int j = 0; j < c1; j++) {
                        if (x == 1)
                            C[i][j] = A[i][j] + B[i][j];
                        else
                            C[i][j] = A[i][j] - B[i][j];
                    }
                }

                if (x == 1)
                    printf("Addition of two matrices:\n");
                else
                    printf("Subtraction of two matrices:\n");

                for (int i = 0; i < r1; i++) {
                    for (int j = 0; j < c1; j++) {
                        printf("%5d", C[i][j]);
                    }
                    printf("\n");
                }

            } else {
                printf("The order of the matrix is not matched.\n");
            }
            break;

        case 0:
            printf("You are out of the menu.\n");

        default:
            printf("ERROR!! Invalid choice.\n");
    }

    return 0;
}
