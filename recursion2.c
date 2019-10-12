#include <stdio.h>

int fun(int number)
{
    if(number==0)
    {
        return 1;
    }

    else
    {
        return 7 + fun(number-2);
    }
    
}

int main()
{
    printf("%d",fun(4));
    
    return 0;
}

