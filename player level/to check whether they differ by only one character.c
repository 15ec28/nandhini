#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[50],b[50];
	int i,j,l1,l2,n=0;
	scanf("%s %s",a,b);
	l1=strlen(a);
	l2=strlen(b);
	if(l1==l2)
	{
		for(i=0;i<l1;i++)
		{
			
			if(a[i]!=b[i])
			{
				n=n+1;
			}
			
		}
		if(n==1)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
	}
	else
	{
		printf("no\n");
	}
	return 0;
}
