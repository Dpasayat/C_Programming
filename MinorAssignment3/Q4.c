#include <stdio.h>

int* merge(int a[],int b[], int m, int n, int res[])
{
    int i,j,k;
    i=j=k = 0;
    while(i<m && j<n)
    {
        if(a[i]<b[j])
        {
            res[k] = a[i];
            i+=1;
            k+=1;
        }
        else{
            res[k] = b[j];
            j+=1;
            k+=1;
        }
    }
    while(i<m)
    {
        res[k] = a[i];
        k+=1;
        i+=1;
    }
    while(j<n)
    {
        res[k] = b[j];
        k+=1;
        j+=1;
    }
    return res;
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
    int a[] = {12,20,24,32};
    int b[] = {7,8,65,105};
    int sorted[8];
    printarr(a,4);
    printarr(b,4);
    merge(a,b,4,4,sorted);
    for(int i = 0; i<8; i++)
    {
        printf("%d\t",sorted[i]);
    }
    printf("\n");
    
    
    return 0;
}