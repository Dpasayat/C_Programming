#include <stdio.h>

int main() 
{
    char ch = 'A';
    printf("Enter choice of the character(A-Z): \n");
    scanf("%c",&ch);
    for(char i = ch; i>='A'; i--)
    {
        for(char j = 'A';j<=ch;j++)
        {
            if(j<=i)
            printf("%c ",j);
            else
            printf("  ");
        }
        for(char k = ch-1;k>='A';k--)
        {
            
            if(k>i)
            printf("  ");
            else
            printf("%c ",k);
        }
        printf("\n");
    }
    
    return 0;
}