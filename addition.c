#include <stdio.h>

int main()
{
    int x=2,y=3,sum=0;
    if(x>=0 && y>=0)
    {
        sum=x+y;
        printf("%d",sum);
    }
    else 
    {
        printf("invalid");
    }
    return 0; 
} 