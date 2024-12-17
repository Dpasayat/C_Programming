#include <stdio.h>

void setDifference(int a[], int b[],int n, int m, int diff[])
{
    int idx = 0;
    for(int i = 0; i<n; i++)
    {
        int flag = 1;
        for(int j = 0; j< m; j++)
        {
            if(a[i]==b[j])
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            diff[idx] = a[i];
            idx+=1;
        }
    }
    if(idx!=n-1)
    diff[idx] = -99;
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
    int a[] = {2,1,3,4};
    int b[] = {4,2,5,6};

    int res[4];
    setDifference(a,b,4,4,res);
    printf("Set A: ");
    printarr(a,4);
    printf("Set B: ");
    printarr(b,4);

    printf("A-b = {");
    for(int i = 0; i<4 && res[i] != -99; i++)
    {
        printf("%d ",res[i]);
    }
    printf("}\n");

    
    return 0;
}