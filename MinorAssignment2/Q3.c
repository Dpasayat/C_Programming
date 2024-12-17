#include<stdio.h>
int main()
{
    printf("Using break when 5 encountered \n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break; // Exit loop when i equals 5
        }
        printf("i = %d\n", i);
    }
    printf("Loop terminated.\n");

    printf("Using continue when 5 encountered \n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue; // skips loop when i equals 5
        }
        printf("i = %d\n", i);
    }
    printf("Loop terminated.\n");
    
    return 0;
}

/*
break is used to terminate the loop prematurely.
continue is used to skip current iteration of the loop and move to next iteration.

break in searching for an element:

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int search = 4;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == search) {
            printf("Found %d at index %d.\n", search, i);
            break;
        }
    }
    return 0;
}

continue to skip over invalid input:

#include <stdio.h>

int main() {
    int arr[] = {10, -3, 20, -1, 15};
    
    for (int i = 0; i < 5; i++) {
        if (arr[i] < 0) {
            continue; // Skip negative values
        }
        printf("Processing value: %d\n", arr[i]);
    }
    return 0;
}
*/
