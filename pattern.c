#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,t;
	char s[100];
	gets(s);
	int l=strlen(s);
	for(i=0;i<l;i++)
	{
		for(j=0;j<l+i;j++)
		{
			printf(" ");
		}
		t=j;
		for(j=i;j<l;j++)
		{
			printf("%c",s[j]);
			
		}
		printf("\n");
	}
	for(i=0;i<l-1;i++)
	{
		for(j=0;j<t-i-1;j++)
		{
			printf(" ");
		}
		for(j=l-2-i;j<=l-1;j++)
		{
			printf("%c",s[j]);
		}
		printf("\n");
	}
	return 0;
}
