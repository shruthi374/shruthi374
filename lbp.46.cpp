#include<stdio.h>
int main()
{
	int a,b,i,j,is prime=0;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				is prime=1;
			}
			i++;
		}
		if(is pime)
		{
			printf("%d",i);
		}
	}
	return 0;
}