#include<stdio.h>
int main()
{
    int i = 0;
    start:
    printf("i= %d\n",i);
    i+=1;
    if (i==5)
    goto finish;
    goto start;
    finish:
    printf("Finished Printing...\n");
    return 0;

}

/*
goto statement is used to perform unconditional jump to another point in the program, using a label. 
While it can sometimes simplify logic in specific scenarios, 
it is generally discouraged because it can make the code harder to understand and maintain.

It's generally recommended to use selection structures and repetition control structures because:
- it improves redability of code
- it is easier to maintain and debug
- reduces risks of infinite loops and unintended jumps
- promotes structured programming
*/