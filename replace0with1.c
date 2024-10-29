#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf(" %d",&n);

    int i = n;
    int r;
    int nn=0;
    int k=1;
    for(i=n;i!=0;i/=10)
    {
        r = i%10;
        if (r == 0) 
        {
            nn = nn + 1 * k;
        } 
        else if (r == 1) 
        {
            nn = nn + 0 * k;
        } 
        else 
        {
            nn = r * k + nn;
        }

        k *= 10;   
    }

    printf("\n%d\n",nn);
    
    return 0;
}
