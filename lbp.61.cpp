#include<stdio.h>
int main()
{
	int a,b,1cm;
	scanf("%d%%d",&a,&b);
	for(i=1;i<a&&i<=b;i++)
	{
		if(a%i==0&&b%i==0)
		{
			1cm=i*(a/i)*(b/i);
		}
	}
	printf("%d",1cm);
	return 0;
}