#include <stdio.h>

int main()
{
    int celsius,fahr;
    int start,end,step;

    start=0;
    end=300;
    step=20;
    fahr=start;

    while(fahr<=end)
{
    celsius=5*(fahr-32)/9;
    printf("%d\t%d\n",fahr,celsius);
    fahr=fahr+step;
}
    return 0;
}
