#include <stdio.h>

int main()
{
    int n,a,i,c=0;

    printf("enter the number to which you to check:\n");
    scanf("%d",&n);

    for ( i = 0; i < 3; ++i)
    {
       a=n%10;
       n=n/10;
       c=c+(a*a*a);
      
    }
     printf("%d",c);
    
    return 0;
}
