#include <stdio.h>
int main()
{
    int n, r = 0,m, g;
    printf("Enter an integer: ");
    scanf("%d", &n);

    g= n;
        while( n!=0 )
    {
      m = n%10;
        r= r*10 + m;
        n /= 10;
    }
       if (g == r)
        printf("%d is a palindrome.", g);
    else
        printf("%d is not a palindrome.",g);
        return 0;
}
