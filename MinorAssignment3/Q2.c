#include <stdio.h>

void sumarr(int a[], int b[], int r[], int size)
{
    for(int i = 0; i<size; i++)
    {
        r[i] = a[i] + b[i]; 
    }
}

int main() 
{
    int a[] = {5,-1,7};
    int b[] = {2,4,-2};
    int res[3];
    sumarr(a,b,res,3);
    for(int i=0;i<3; i++)
    {
        printf("%d\t",res[i]);
    }
    printf("\n");
    
    return 0;
}