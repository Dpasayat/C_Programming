#include <stdio.h>

void firstRepeatedChar(char arr[])
{
    for(int i =0; arr[i]!='\0'; i++)
    {
        int flag = 0;
        for(int j = 0;j<i;j++)
        {
            if(arr[i]==arr[j])
            flag = 1;
        }
        if(flag)
        {
            printf("%c\t",arr[i]);
            break;
        }
    }
    printf("\n");
}

int main() 
{
    char ch[] = "DhirajKumarPasayat";
    firstRepeatedChar(ch);
    
    
    return 0;
}