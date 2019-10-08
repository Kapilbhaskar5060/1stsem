#include <stdio.h>

/*int sum(int a,int b);

 
int main()
{
    int a,b,c;
    a=6; 
    b=89;
    c=sum(a,b);
    printf("%d\n",c);
    return 0;
}
// to see that declaration is the first step
//and return can come in the last

int sum(int a,int b)
  {  
      return a + b;
  
  }*/


// with argument without return

void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
       printf("%c",'*');
    }
}  

// without argument with retuen value

int takenumber()
{
    int i;
    printf("enter a number");
    scanf("%d",&i);
    return i;
}

  int main()
{
    int c;
   c= takenumber();
    printf("your entered number is %d",c);
    //printstar(8);
    return 0;
}
