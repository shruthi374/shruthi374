#include<stdio.h>
int main()
{
	int start,end,i,j,count,sum=0,c1=0;
	float avg;
	scanf("%d%d",&start,&end);
	for(i=start;i<=end;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			count++;
		}
		if(count==2){
			printf("%d\n",i);
			c1=c1+1;
			sum=sum+i;
			avg=(float)sum/c1;
			
		}
		
	}printf("%f\n",avg);
	return 0;
}