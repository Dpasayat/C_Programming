#include <stdio.h>

int main() 
{
    int a,b,c,d;
    int* arr[] = {&a,&b,&c,&d};
    *arr[0] = 55;
    *arr[1] = 105;
    *arr[2] = 89;
    *arr[3] = 68;
    int maxvar = *arr[0];
    for(int i = 1 ;i<4;i++)
    {
        if(maxvar< *arr[i])
        maxvar = *arr[i];

    }
    printf("maxvar: %d\n",maxvar);
    
    return 0;
}