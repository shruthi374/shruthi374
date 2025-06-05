#include<stdio.h>
int main()
{
	int a[10]={0},n,d;
	scanf("%d",&n);
	while(n)a[n%10]=1,n/=10;
	for(d=9;d>=0;d--)if(a[d]&&--a[10]==0)break;
	for(d=9,a[10]=0;d>=0;d--)if(a[d]&&++a[10]==2)break;
	if(a=[10]<2)
	printf("no 2nd lagest digit\n");
	else
	{
		printf("%d\n",d);
	}o
	return 0;
}