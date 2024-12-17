#include <stdio.h>

int main() 
{
    float x = 6.7f;
    float y = 1.2f;
    float z = 2.3f;

    float* p = &x;
    printf("%f\n",*p);
    p = &y;
    printf("%f\n",*p);
    p= &z;
    printf("%f\n",*p);
    
    return 0;
}