#include<stdio.h>
int main()
{
	int x,y,sum=0;
	scanf("%d%d",&x,&y);
	for(int i=x;i<=y;i++)
	if(i%2==0)
	sum+=i;
	printf("%d",sum);
	return 0;
}