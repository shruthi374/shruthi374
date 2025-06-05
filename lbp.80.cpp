#include<stdio.h>
int main()
{
	int n,i=2,sum=0;
	scanf("%d",&n);
	while(n>1)
	{
		if(n%i==0)
		{
			sum+=i;
			n/=i;
		}
		else
		{
			i++;
		}
    }
    printf("%d",sum);
    return 0;
}