#include<stdio.h>
int main()
{
	int start=2,end,i,j,temp,count;
	scanf("%d",&end);
	for(i=start;i<=end;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			count++;
		}
		if(count==2){
			temp=i;
			while(temp>0){
				if(temp%10==9)
				printf("%d\n",i);
				break;
			}
			temp=temp/10;
		}
	}
	return 0;
}