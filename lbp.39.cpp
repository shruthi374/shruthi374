#include<stdio.h>
int main()
{
	int a,m,n,A;
	scanf("%d%d%d",&a,&m,&n);
	A= pow(pow(a,m,n));
	printf("%d",A);
	return 0;
}