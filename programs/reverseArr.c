// this program will reverse the elements of array which is entered by user
#include <stdio.h>
int main()
{
    int n, i, j;
    printf("How many elements\n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int temp = 0;
    for (i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    printf("Reversed array are:\n");
    for(i=0; i< n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}