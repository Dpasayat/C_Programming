#include<stdio.h>
int main()
{
    int ch = 1;
    printf("Switch Case with break:\n");
    switch(ch)
    {
        case 1: 
        printf("one\n");
        break;
        case 2:
        printf("Two\n");
        break;
        case 3:
        printf("Three\n");
        break;
        default:
        printf("end of Switch Case\n");
    }
    printf("Switch case without break:\n");
    ch = 1;
    switch(ch)
    {
        case 1: 
        printf("one\n");
        
        case 2:
        printf("Two\n");
        
        case 3:
        printf("Three\n");
        
        default:
        printf("end of Switch Case\n");
    }

    
    return 0;
}

/*
The break statement in a switch case is used to terminate the execution of a specific case 
and prevent the program from falling through to subsequent cases. 
Without a break, the program will continue executing the statements of the next case, 
even if the condition for that case is not met.
*/