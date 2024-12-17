#include <stdio.h>

void bubSort(int arr[], int size)
{
    for(int i = 0;i<size-1; i++)
    {
        for(int j=0;j<size - i -1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void printarr(int arr[], int n)
{
    for(int i=0;i<n; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int main() 
{
    int arr[] = {9,4,3,2,7,1,8};
    printarr(arr,7);
    bubSort(arr,7);
    printarr(arr,7);
    
    
    return 0;
}