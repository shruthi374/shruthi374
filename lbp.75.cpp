#include<stdio.h>
int main()
{
	int n,cn1,r,rev=0;
	scanf("%d",&n);
	cn1=n;
	while(n>0)
	{
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
	}
	if(cn1=rev)
	printf("yes");
	else
	printf("no");
}