#include<stdio.h>
int main()
{
	int num=0;
	int start,end,i,j,sum=0,r;
	scanf("%d%d",&start,&end);
	for(i=start;i<=end;i++)
	{
		sum=0;
		for(j=1;j<=i;j++);
		{
			i=i%10;
			r=i%10;
			i=i/10;
		}
		sum=sum+(i*r);
	}
	if(sum==i)
	printf("%d",sum);
	return 0;
}