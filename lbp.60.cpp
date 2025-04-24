#include<stdio.h>
int main()
{
	int n1,n2,n3,i,gcd;
	printf("enter two integers: ");
	scanf("%d%d%d",&n1,&n2,&n3);
	for(i=1; i<=n1&&i<=n2&&i<=n3;i++)
	{
		if(n1%i==0&&n2%i==0&&n3%i==0)
		gcd=i;
	}
	printf("gcd o.f%d and %is %d",n1,n2,gcd);
	return 0;
}