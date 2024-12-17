#include <stdio.h>

int main() 
{
    int a[] = {1,2,3,5,6,7,7};
    printf("%u\n", a[3]);
    int x=5;
    //scanf("%d",x);
    //int* ptr = x;
    printf("%d\n",sizeof(a)/sizeof(a[0]));
    
    return 0;
}