#include <stdio.h>

int main() 
{
    int arr[] = {3,5,7,9,12,16,18};
    printf("Enter a key to search: \n");
    int key;
    scanf("%d",&key);
    int top = 6;
    int bottom = 0;
    int middle = (int)((top+bottom)/2);
    int found=0;
    int idx = middle;
    while(top > bottom)
    {
        if(key > arr[middle])
        {
            bottom = middle+1;
        }
        if(key < arr[middle])
        {
            top = middle-1;
        }
        middle = (int)((bottom + top)/2);
        if(arr[middle] == key)
        {
            found = 1;
            idx = middle;
            break;
        }
    }
    if(found)
    {
        printf("Found in index: %d\n", idx);
    }
    else{
        printf("Not found\n");
    }
    
    return 0;
}