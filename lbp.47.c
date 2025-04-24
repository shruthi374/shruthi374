#include<stdio.h>
int main()
{
	int start,end,i,j,count,sum=0;
	scanf("%d%d",&start,&end);
	for(i=start;i<=end;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			count++;
		}
		if(count==2)
		sum=sum+i;
	}
	printf("%d",sum);
	return 0;
}
