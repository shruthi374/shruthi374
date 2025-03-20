#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}