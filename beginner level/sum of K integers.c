#include <stdio.h>
int main()
{
  int N,K,i, n[20],sum=0;
     scanf("%d %d\n",&N,&K);
    
  for(int i=0;i<N;i++)
  {
      scanf("%d",&n[i]);
  }
 for(int i=0;i<K;i++)
 {
 sum= sum+n[i];
    }
 printf("%d",sum);
  return 0;
}
