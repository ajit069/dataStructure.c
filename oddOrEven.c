#include <stdio.h>

int main()
{
    int n, i,oddCounter=0,evenCounter=0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0){
            evenCounter++;
        }

        else{
            oddCounter++;
        }
    }

    printf("The number of odd element in the array is %d.", oddCounter);

    printf("The number of even element in the array is %d.", evenCounter);

    return 0;
}
