#include<stdio.h>
int main()
{
	float tm,p,mg;
	scanf("%f",&tm);
	scanf("%f",&p);
	if(p<0||p>100)
	{
		return 4;
	}
	mg=(p/100)*tm;
	printf("%2.f\n",mg);
	return 0;
}