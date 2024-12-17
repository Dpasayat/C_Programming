#include <stdio.h>

int main() 
{
    int a[] = {10,13,20,33,44};
    float b[] = {10.2,13.3,20.0,33.3,45.3,89.9};
    int* ptr1 = a;
    float* ptr2 = b;

    for(int i = 0 ;i< 5; i++)
    {
        printf("a[i]: %d \t &a[i]: %p\n",*(ptr1+i), (ptr1+i));
    }
    for(int i = 0 ;i< 5; i++)
    {
        printf("b[i]: %.1f \t &b[i]: %p\n",*(ptr2+i), (ptr2+i));
    }
    
    return 0;
}