#include <stdio.h>

int main() 
{
    int a = 76;
    int b = 86;
    printf("a: %d \t address: %p\n", a, &a);
    printf("b: %d \t address: %p\n", b, &b);

    int temp = a;
    a = b;
    b = temp;

    printf("a: %d \t address: %p\n", a, &a);
    printf("b: %d \t address: %p\n", b, &b);


    
    return 0;
}