#include <stdio.h>

int main()
{
    int i,a=0,b=0,c,d=0,e=0,f=0,total;

    for ( i = 1; i < 1000; i++)
    {
       if(i%3==0 && i%5==0)
       {
           
          d=a+i;
           a=d;
          printf("d value is %d\n",d);
          
       }

       else if (i%3==0)
       {
           
           c=b+i;
            b=c;
           printf("b value is %d\n",c);
         
       }
       else if (i%5==0) 
       {
          e=f+i;
          f=e;
          printf("e value is %d\n",e);    
       }
       

    }
         total=d+c+e;        
        
        printf("value of c is %d\n",total);
        return 0;
}
