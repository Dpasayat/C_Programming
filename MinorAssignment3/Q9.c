#include <stdio.h>

int main() {
    char sh[] = "Dhiraj Kumar Pasayat";

    for(int i=0; sh[i]!='\0';i++)
    {
        char ch = sh[i];
        int c =0 ;
        int flag = 0;
        for(int j = 0; sh[j]!='\0';j++)
        {
            if(sh[j]==ch)
            {
                if(j<i)
                flag =1;
                c+=1;

            }
            

        }
        if(flag==0)
        printf("Frequency of %c is %d\n",ch,c);
    }
    // printf("%u\n",' ');
    // printf("%u\n",'\0');

    return 0;
}
