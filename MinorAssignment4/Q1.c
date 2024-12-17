#include <stdio.h>

int main() 
{
    int a = 345;
    float b = 4.5f;
    char z = 'Z';
    int* ptra = &a;
    float* ptrb = &b;
    char* ptrz = &z;
    printf("%d\t%p\n", a, ptra);
    printf("%.2f\t%p\n", b, ptrb);
    printf("%c\t%p\n", z, ptrz);

    
    return 0;
}