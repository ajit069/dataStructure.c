#include <stdio.h>
#define MAX 5   

int stack[MAX];
int top = -1;

int main() {
    int choice;

    do {
        printf("\n--- STACK MENU ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:{
                int item;
                if (top == MAX - 1) {
                    printf("Stack Overflow! Cannot push.\n");
                } else {
                    printf("Enter element to push: ");
                    scanf("%d", &item);
                    top++;
                    stack[top] = item;
                    printf("Element pushed successfully.\n");
                    };
                };
                break;
            case 2:{
                if (top == -1) {
                printf("Stack Underflow! Cannot pop.\n");
                } else {
                    printf("Popped element: %d\n", stack[top]);
                    top--;
                    };
                };
                
                break;
            case 3:{
                if (top == -1) {
                printf("Stack is empty.\n");
                } else {
                printf("Stack elements are:\n");
                for (int i = top; i >= 0; i--) {
                printf("%d\n", stack[i]);
                    }
                    }
                };
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}
