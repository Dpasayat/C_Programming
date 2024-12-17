#include <stdio.h>

int main() 
{
    int a = 12;
    int b =25;
    int c = 18;
    int* ptr = &a;
    *ptr = *ptr + 10;
    ptr = &b;
    *ptr = *ptr + 10;
    ptr =&c ;
    *ptr = *ptr + 10;
    printf("%d\t%d\t%d\n",a,b,c);    
    return 0;
}