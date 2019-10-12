#include <stdio.h>

int main()
{
    int n;
    float i;
    
    end:
    
    printf("select the conversion you want to do:\n 1) km to miles\n 2) inches to foot\n 3) cms to inches\n 4) poinds to kg\n 5) inches to meters\n");
    scanf("%d",&n);


    printf("input the number you want to convert:\n");
    scanf("%f",&i);
    
   if (n==1)
   {
       i=i*0.621;
       printf("%f miles",i);
   }

   else if (n==2)
   {
       i=i*0.0833;
       printf("%f foot",i);
   }

   else if (n==3)
   {
       i=i*0.394;
       printf("%f inch",i);
   }

   else if (n==4)
   {
       i=i*0.0254;
       printf("%f meter",i);
   }

   else if (n==5)
   {
       i=i*0.454;
       printf("%f pounds",i);
   }

   else
   {
       
       printf("the input is invalid\n");
       goto end;
   }

   
    return 0;
}
