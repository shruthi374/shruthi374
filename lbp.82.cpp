#include<stdio.h>
int main()
{
	float p,r,t,si;
	scanf("%f%f%f",&p,&r,&t);
	si=(p*r*t)/100;
	printf("%2.f\n",si);
	return 0;
}