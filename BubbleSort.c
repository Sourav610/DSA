#include <stdio.h>

void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void bubblesortAdaptive(int *arr, int n)
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++)
    {
        printf("The number of pass is %d \n", i + 1);
        isSorted = 1;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}

void bubblesort(int *arr, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        printf("The number of passes is %d \n", i + 1);
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {12, 54, 65, 7, 23, 9};
    // int arr[] = {1,2,3,6, 8, 9,};
    int n = 6;
    printArray(arr, n);
    bubblesort(arr, n);
    printArray(arr, n);
    bubblesortAdaptive(arr,n);
    printArray(arr, n);
    return 0;
}