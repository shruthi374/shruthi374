#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	char str[20];
	sprintf(str,"%d",num);
	for(int i=0;str[i];i++)
	{
		if(str[i]=='0')
		str[i]='5';
	}
	printf("%s",str);
	return 0;
}