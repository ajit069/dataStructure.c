#include <stdio.h>

int main()
{
    int n, i,zeroCounter=0,plusCounter=0,minusCounter=0;

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
        if(arr[i] == 0){
            zeroCounter++;
        }

        else if(arr[i] > 0){
            plusCounter++;
        }

        else{
            minusCounter++;
        }
    }

    printf("\n The number of zero element in the array is %d.", zeroCounter);

    printf("\n The number of positive element in the array is %d.", plusCounter);

    printf("\n The number of negative element in the array is %d.", minusCounter);

    return 0;
}
