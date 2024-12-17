#include <stdio.h>

int main() 
{
    int a = 12;
    int b =52;
    int c = 8;
    int* ptr1 = &a;
    int* ptr2 = &b;
    int* ptr3 = &c;
    *ptr1 = *ptr1 + 10;
    *ptr2 = *ptr2 + 10;
    *ptr3 = *ptr3 + 10;
    printf("%d\t%d\t%d\n",a,b,c);    
    return 0;
}