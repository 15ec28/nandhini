#include<stdio.h>
#include<string.h>
int main(void){
   char a[10];
   int l,i,k;
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++){
    	if(i==0){
    		a[i]=a[i]-32;
		}
		if(a[i]==' '){
			a[i+1]=a[i+1]-32;
			for(k=i;k<l;k++){
				a[k]=a[k+1];
			}
			l--;
		}
	}
	printf("%s",a);
}
