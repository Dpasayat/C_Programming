#include <stdio.h>

int main() 

{
    int n;
    printf("Enter a number> ");
    scanf("%d",&n);
    printf("\n");
    printf("+---------------------------------------------------------------------------------------+\n");
    for(int i = 1; i<=10;i++)
    {
        if(i==1)
        printf("|\t");
        printf("%d\t",n*i);
        if(i==10)
        printf("|\n");
    }
    for(int i = 1; i<=10;i++)
    {
        if(i==1)
        printf("|\t");
        printf("%d\t",i);
        if(i==10)
        printf("|\n");
    }
    for(int i = 1; i<=10;i++)
    {
        if(i==1)
        printf("|\t");
        printf("%d\t",n);
        if(i==10)
        printf("|\n");
    }
    printf("+---------------------------------------------------------------------------------------+\n");
    
    return 0;
}