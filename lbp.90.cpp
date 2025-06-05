#include<stdio.h>
int n prime (int n)
{
	if(n<2)return 0;
	for(int i=2; i<=n/2;i++)
	if(n%i==0)return 0;
	return 1;
}
int main()
{
	int N;
	scanf("%d",&N);
	while(N>=10)
	N/=10;
	if(is prime(N))
	printf("true\n");
	else
	printf("false\n");
	return 0;
}