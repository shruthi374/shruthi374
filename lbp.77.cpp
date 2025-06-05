#include<stdio.h>
int main()
{
	int n,a=0,z=0;
	scanf("%d",&n);
	while(n>1)
	{
		if(n%10==1)a++;
		if(n%10==0)z++;
		n/=10;
	}
	printf("%d,%d\n",a,z);
	return 0;
}