#include<stdio.h>
int isLeap(int year)
{
    if(year %4 == 0)
    {
        if(year % 100 == 0)
        {
            if(year %400==0)
            return 1;
            else
            return 0;
        }
        else
        return 1;
    }
    else
    return 0;
}

int main()
{
    int m,d,y,dayno;
    printf("Input month:\n");
    scanf("%d", &m);
    printf("Input day: \n");
    scanf("%d", &d);
    printf("Input Year: \n");
    scanf("%d",&y);

    dayno = 0;
    m-=1;
    switch(m)
    {
        case 12:
            dayno+=31;
        case 11:
            dayno+=30;
        case 10:
            dayno+=31;
        case 9:
            dayno+=30;
        case 8:
            dayno+=31;
        case 7:
            dayno+=31;
        case 6:
            dayno+=30;
        case 5:
            dayno+=31;
        case 4:
            dayno +=30;
        case 3:
            dayno +=31;
        case 2:
            if(isLeap(y))
            dayno+=29;
            else
            dayno+=28;
        case 1:
            dayno+=31;
        default:
            dayno+=0;


    }
    dayno+=d;
    printf("Day Number: %d\n",dayno);

    
    return 0;
}
