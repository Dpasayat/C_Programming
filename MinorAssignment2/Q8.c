#include<stdio.h>
#include <math.h>

int main() 
{
    double x;
    printf("Enter X:\n");
    scanf("%lf",&x);
    double sum = (x-1)/x;
    for(int i = 2;i<=9;i++)
    {
        sum += 0.5 * pow((x-1)/x,i);
    }

    printf("The sum of logarithm series upto nine terms : %.3f\n",sum);
    
    return 0;
}