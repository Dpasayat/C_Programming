#include <stdio.h>

int main() 
{
    int a =52;
    int* ptr1 = &a;
    int b = 18;
    int* ptr2 = &b;
    int max = 0;

    if(*ptr1 > *ptr2)
    max = *ptr1;
    else
    max = *ptr2;

    printf("Max: %d\n",max);
    
    return 0;
}