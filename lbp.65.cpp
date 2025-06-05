#include<stdio.h>
int main()
{
	int temp,n,sum=0,r;
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("%d\n",sum);
	if(temp%sum==0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
