#include<stdio.h>
int linearSearch(int arr[], int size, int element)
{
    for(int i =0; i<size; i++)
    {
        if(arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr1[],int size1,int element)
{
  int high, low =0, mid;
  high = size1-1;
  while(low<=high){
    mid = (low +high)/2;
    if(arr1[mid] == element)
    {
        return mid;
    }
    if(arr1[mid]< element)
    {
        low = mid+1;
    }
    else{
        high = mid-1;
    }
  }
  return -1;


}
int main(){
    //Unsorted array for linear search
    int arr[] = {1,3,5,56,4,3,23,5,4,54634,53,56};
    int size = sizeof(arr)/sizeof(int);
    
    // Sorted array for binary search
    int arr1[] = {1,3,5,12,34,44,47,50,53,56};
    int size1 = sizeof(arr1)/sizeof(int);
    int element = 53;
    int searchIndex = linearSearch(arr, size, element);
    int searchIndex1 = binarySearch(arr1,size1, element);
    printf("The element %d was found at index %d \n",element, searchIndex);
    printf("The element %d was found at index %d \n",element, searchIndex1);
    return 0;
}