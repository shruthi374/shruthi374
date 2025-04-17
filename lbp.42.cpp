#include<stdio.h>
int main()
{
	int sales;
	scanf("%d",&sales);
	if(sales>=30&&sales<=50)
	{
		printf("D");
	}
	else if(sales>=51&&sales<=60)
	{
		printf("C");
	}
	else if(sales>=61&&sales<=80)
	{
		printf("B");
	}
	else
	{
		printf("A");
	}
	return 0;
}