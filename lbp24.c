#include<stdio.h>
int main()
{
    int n,d,sum=0;
    sacnf("%d %d",&n,&d);
    while(n>0){
        if(n%10=d)sum++;
        n=n/10;
    }
    printf("occurance is:%d",sum);
    return 0;
}