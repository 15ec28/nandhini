#include <stdio.h>
#include<string.h>
int main(void) {
	char s[10],t;
	int i,j;
	scanf("%[^\n]s",s);
	j=strlen(s);
	if(j%2==0)
	{
	for(i=0;i<j;i+=2)
             {
             t=s[i];
             s[i]=s[i+1];
             s[i+1]=t;
             }
   	 printf("%s",s);
	}
    else
    {
    for(i=0;i<j;i+=3)
             {
             t=s[i];
             s[i]=s[i+1];
             s[i+1]=t;
             }
   	 printf("%s",s);
	}
	return 0;
}
