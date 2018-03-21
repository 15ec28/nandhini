#include <stdio.h>
int main()
{
  int n1,n2,i,j,fl=0,cnt=0;
  scanf("%d %d",&n1,&n2);
  for(i=n1;i<=n2;i++)
  {
      fl=0;
      for(j=2;j<=(i/2);j++)
      {
          if((i%j)==0)
          {
              fl=1;
              break;
          }
          else
          {
              fl=0;
          }
      }
       if(fl==0)
        {
            cnt++;
        }
  }
  printf("%d",cnt);
   return 0;
}
