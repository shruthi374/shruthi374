#include<stdio.h>
#include<string.h>
int main()
{
	char s[15];
	int sum=0,i;
	scanf("%s",&s);
	for(i=0;s[i]! =\0;i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='0'||s[i]=='4'||s[i]=='A'||s[i]=='e'||s[i]=='I'||s[i]='o'||s[i]=='U')
		sum=sum+1;
	}
	print("%d",sum);
	return 0;
}

	
