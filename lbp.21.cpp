#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<0)
    {
        printf("freezing");
    }
    else if(n>=0&&n<=20)
    {
        printf("cold");
    }
    else if(n>=21&&n<=30)
    {
        printf("modurate");
    }
    else
    {
        printf("hot");
    }
    return 0;
}