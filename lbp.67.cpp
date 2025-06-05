#include<stdio.h>
int main()
{
	int num,rem,count=0;
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
	
	if(rem==0)
	{
		count=count+1;
	}
}
	if(count>0)
	{
		printf("YES");
	}
	else
	
		printf("NO");
	
	return 0;
}