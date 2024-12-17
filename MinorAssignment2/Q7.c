#include<stdio.h>
int main()
{
    int marks;
    printf("Enter marks obtained\n");
    scanf("%d",&marks);
    int ch = (marks-1)/10;
    char grade = 'f';
    switch(ch)
    {
        case 10:
            grade = 'O';
            break;
        case 9:
            grade = marks >= 95? 'O': 'A';
            break;
        case 8:
            grade = 'A';
            break;
        case 7:
            grade = 'B';
            break;
        case 6:
            grade = 'C';
            break;
        case 5:
            grade = 'D';
            break;
        case 4:
            grade = 'E';
            break;
        case 3:
            grade = marks==40? 'E':'F';
            break;
        default:
            grade = 'F';

    }
    printf("Grade: %c\n",grade);
    return 0;
}