#include<stdio.h>
int main()
{
	int start,end,i,n,rev,rem;
	scanf("%d%d",&start,&end);
	for(i=start;i<=end;i++)
	{
		n=i;
		rev=0;
		while(n>0)
		{
			rem=n%10;
			rev=rev*10+rem;
			n=n/10;
		}
		if(rev==1)
		printf("%d",i);
	}
	return 0;
}