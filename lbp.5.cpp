#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,root1,root2,d;
	scanf("%f %f %f", &a,&b,&c);
	d=b*b-4*a*c;
	root1=(-b+sqrt(d))/2*a;
	root2=(-b-sqrt+(d))/2*a;
	printf("%o.f,%o.f",root1,root2);
	return 0;
}