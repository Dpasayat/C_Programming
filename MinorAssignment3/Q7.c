#include <stdio.h>

void printDistinct(int arr[], int size)
{
    for(int i =0; i<size; i++)
    {
        int flag = 1;
        for(int j = 0;j<i;j++)
        {
            if(arr[i]==arr[j])
            flag = 0;
        }
        if(flag)
        {
            printf("%d\t",arr[i]);
        }
    }
    printf("\n");
}

int main() 
{
    int arr[] = {4,7,3,7,2,5,5};
    printDistinct(arr,7);
    
    
    return 0;
}