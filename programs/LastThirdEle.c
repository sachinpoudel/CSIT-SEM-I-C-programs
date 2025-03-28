//  In this program we will find the third largest, second largest and  
// largest element from a list of array

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the size of array\n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Now performing the bubble sorting technique
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                /* swapping */
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("sorted array\n");
    for(int i=0; i<n; i++){
        printf("%d \t", arr[i]);
    }
    if(n>=3){
        printf("\nThe third largest element of array is %d", arr[n-3]);
        printf("\nThe second largest element of array is %d", arr[n-2]);
        printf("\nThe third largest element of array is %d", arr[n-1]);
    }else{
        printf("Invalid");

    }

    return 0;
}
