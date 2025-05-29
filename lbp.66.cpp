#include<stdio.h>
#include<math.h>
int main()
{
	int a=0,b=1,c,r,i,sum=1;
	scanf("%d",&r);
	for(i=2;i<r;i++)
	{
		c=a+b;
		a=b;
		b=c;
		sum=sum+c;
	}
	printf("%d",sum);
	return 0;
}
