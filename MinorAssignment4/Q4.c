#include <stdio.h>

int main() 
{
    int x =89;
    int* p1 =&x;
    int* p2 =&x;
    int* p3 =&x;
    printf("%d\n",*p1);

    *p3 = 100;
    printf("%d\n",*p1);

    
    return 0;
}