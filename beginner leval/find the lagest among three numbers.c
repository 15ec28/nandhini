#include <stdio.h>

int main()
{
   int a,b, c;
   printf("Enter the character");
   scanf("%d %d %d",&a,&b,&c);
   if(a>=b && a>=c) 
   {
       printf("%d is a largest number",a);
   }
   if(b>=a && b>=c) 
   {
       printf("%d is a largest number",b);
   }
 if(c>=a && c>=b) 
   {
       printf("%d is a largest number",c);
   }
       return 0;
}
